#!/bin/sh
git ls-files --others -i --exclude-standard | sed 's/.*\///'
