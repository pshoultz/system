#!/bin/bash

exec xfce4-terminal -e ./mongo.sh &
sleep 5
exec xfce4-terminal -e ./client.sh &
exec xfce4-terminal -e ./api.sh &
exec xfce4-terminal -e ./assets.sh 
