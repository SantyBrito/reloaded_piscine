#!/bin/sh
ifconfig | grep ether | tr -d ' ' | cut -d ' ' -f2