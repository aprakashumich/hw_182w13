#!/bin/bash
git commit -m "local update"
git pull -s recursive -X theirs https://github.com/aprakashumich/hw_182w13 master
git checkout .

