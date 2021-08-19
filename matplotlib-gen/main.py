#!/usr/bin/env python3
# coding: UTF-8

import matplotlib.pyplot as plt
import datetime
import json

# File path for saving data
data_path = "./data/data.json"
banner_path = "./data/fig.png"
        
# Load data from "data/data.json"
def load():
    print("[INFO] 🔷 Loading data.")
    raw = open(data_path, 'r')
    parsed = json.load(raw)
    return parsed

# Show or save the graph by using matplotlib
def graph():
    print("[INFO] 🔷 Trying to show the graph by using matplotlib.")
    data = load()
    plt.figure(figsize=(20,5)) # 1500x500 is Twitter's recommendation of header size.
    
    x = data['timestamp']
    y = data['temp']
    plt.plot(x, y, label="Temp")
    
    plt.legend()
    plt.title("Moderna Vaccine 2nd dose: Changes in body temperature")
    plt.xlabel('timestamp')
    plt.ylabel('temp')
    
    # plt.show()
    plt.savefig(banner_path, format='png')
    print("[INFO] ✅ Successfully saved graph.")

def main():
    graph()

if __name__ == '__main__':
  main()