#!/bin/bash

# Make sure that student supplies uniquename as a parameter
EXPECTED_ARGS=1
if [ $# -ne $EXPECTED_ARGS ]
then
    echo "Usage: `basename $0` your_uniquename"
    exit 100
fi

uniquename=$1

firstchar=${uniquename:0:1}
secondchar=${uniquename:1:1}

backupserver="ssh://$uniquename@login.itd.umich.edu/afs/umich.edu/user/$firstchar/$secondchar/$uniquename/eecs182HW"



git add .
git commit -m "updates"
git push $backupserver master







