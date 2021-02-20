package main

import (
    "fmt"
    //"unicode/utf8"
)

func main(){
	var str string
	print("文字列を入力してください: ")
	fmt.Scan(&str)
	for _, c := range str { 
		println(string([]rune{c}))
	}
}