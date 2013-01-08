#!/bin/bash

# Make sure that student supplies uniquename as a parameter
EXPECTED_ARGS=1
if [ $# -ne $EXPECTED_ARGS ]
then
    echo "Usage: `basename $0` your_uniquename"
    exit 100
fi

uniquename=$1

# Create the remote repository in ITD space

echo "Attempting to create a homework repository in your ITD space. Enter your umich password when prompted." 
ssh $uniquename@login.itd.umich.edu "mkdir eecs182HW;fs setacl eecs182HW $uniquename all -clear; fs setacl eecs182HW aprakash read; fs setacl eecs182HW vidal read; fs setacl eecs182 njherman read; cd eecs182HW; git init --bare" 

firstchar=${uniquename:0:1}
secondchar=${uniquename:1:1}

git remote add backupserver ssh://$uniquename@login.itd.umich.edu/afs/umich.edu/user/$firstchar/$secondchar/$uniquename/eecs182HW


echo "You can usually ignore most fatal errors from this script if you are running the script multiple times." 



