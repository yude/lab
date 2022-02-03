#!/bin/sh

# Backup: docker-compose/mastodon
MSTDN_TAG=$(echo $RANDOM | md5sum | head -c 20; echo;)
echo MSTDN_TAG: $MSTDN_TAG
## Comitting containers into images
docker commit -p mastodon_db_1 mastodon_db_bak_$MSTDN_TAG
docker commit -p mastodon_sidekiq_1 mastodon_sidekiq_bak_$MSTDN_TAG
docker commit -p mastodon_web_1 mastodon_web_bak_$MSTDN_TAG
docker commit -p mastodon_streaming_1 mastodon_streaming_bak_$MSTDN_TAG
docker commit -p mastodon_redis_1 mastodon_redis_bak_$MSTDN_TAG
## Saving archives into tarball
docker save -o $HOME/mastodon_db_bak_$(date +%Y%m%d%H%M).tar mastodon_db_bak_$MSTDN_TAG
docker save -o $HOME/mastodon_sidekiq_bak_$(date +%Y%m%d%H%M).tar mastodon_sidekiq_bak_$MSTDN_TAG
docker save -o $HOME/mastodon_web_bak_$(date +%Y%m%d%H%M).tar mastodon_web_bak_$MSTDN_TAG
docker save -o $HOME/mastodon_streaming_bak_$(date +%Y%m%d%H%M).tar mastodon_streaming_bak_$MSTDN_TAG
docker save -o $HOME/mastodon_redis_bak_$(date +%Y%m%d%H%M).tar mastodon_redis_bak_$MSTDN_TAG
## Remove garbage images
docker rmi $(docker images --format '{{.Repository}}:{{.Tag}}' | grep -E "mastodon_.*?_bak_")
echo Done!
