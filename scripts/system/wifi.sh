#!/bin/bash

command=$1
ssid=$2
password=$3
device="wlp3s0"

case $command in
    #scans all SSID's
    "scan")
        echo WIFI: starting scan
        echo =======================
        sudo iw dev $device scan | grep "SSID"
        ;;
    #add SSID to wpa_supplicant with passphrase
    "add")
        echo WIFI: generating wpa_passphrase
        echo =======================
        wpa_passphrase $ssid $password >> /etc/wpa_supplicant/wpa_supplicant.conf && echo WIFI: done generating wpa_passphrase!
        ;;  
    #start wifi connection
    "start")
        echo WIFI: starting $device 
        echo =======================
        sudo wpa_supplicant -Dnl80211 -i$device -c/etc/wpa_supplicant/wpa_supplicant.conf -B && sudo dhcpcd $device && echo WIFI: connection successful!;
        ;;
    #stop wifi connection
    "stop")
        echo WIFI: stopping $device
        echo =======================
        sudo killall wpa_supplicant dhcpcd && echo WIFI: disconnect successful!
        ;;
    *)
        echo "commands: start; stop; scan; add <ssid> <password>;";;
esac

