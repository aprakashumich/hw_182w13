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

echo "Attempting to remove your repository in your ITD space."  
echo "Enter your umich password when prompted." 
DATE=`date +"_backup_%Y_%m_%d_%H%M%S"`
ssh $uniquename@login.itd.umich.edu "mv -f eecs182HW eecs182HW$DATE;"

echo "If you got no errors, then your previous repository was renamed to eecs182HW$DATE" 
echo "Please create a fresh repository using createbackup.sh (one time) followed" 
echo "by dobackup.sh." 

