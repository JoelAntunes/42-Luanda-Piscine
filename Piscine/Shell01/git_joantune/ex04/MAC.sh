#!/bin/bash
ifconfig | grep -oE '([0-9a-fA-F]{2}:){5}[0-9a-fA-F]{2}'

