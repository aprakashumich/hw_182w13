#!/bin/bash
git commit -m "local update"
git pull -s merge -X theirs https://github.com/aprakashumich/hw_182w13 master
git checkout .

