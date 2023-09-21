#!/bin/bash
ifconfig | grep ether | cut -c 8- | awk '{print $2}'
