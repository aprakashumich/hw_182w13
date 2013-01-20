This is the folder where you should keep your homework code.

Do this initially and whenever you want to fetch updated homework files
---------------------------------------------------------------------

% pullhwupdates.sh

Do the following one time:
--------------------------

% createbackup.sh YOUR_UNIQUENAME

This creates a version-controlled backup repository in your ITD storage space. 
It will maintain both old and current versions of your system as long as you remember to run the next command to backup your files often.

Note: The IAs/TAs and Professor will also have read/write access to 
your homework 
repository.  That way, we can more easily help you when needed as well
verify that you have done the work on time, in case something goes wrong
with Ctools submission. (At some point, this may replace the CTools 
submission system in the class. For now, submit your final solutions to Ctools.)

Doing a backup: Do this frequently. Even every hour or a few minutes.
--------------------------------------------------------------------

% dobackup.sh YOUR_UNIQUENAME

This backups your edits to ITD repository in your account. RUN THIS 
FREQUENTLY. OTHERWISE, NOTHING IS BACKED UP!

That way, if you ever lose your files (e.g., accidental deletion, Mint
corruption, or loss of your laptop), we can help you restore them. 

Restoring files (do when necessary)
------------------------------------

% dorestore.sh YOUR_UNIQUENAME

should restore any missing files from the latest backup. This should be safe 
to run. It will simply tell you that your files are up to date if nothing
needs to be restored.  If you have corrupted a file totally and wish to bring
it back, then delete it and the run the above program to restore it from the
last backup.

Things to avoid
--------------

Try to avoid modifyng the files that are distributed to you 
(e.g., HW1.txt, sample files).

Avoid doing anything in the .git folder.

Troubleshooting
---------------

If something gets totally messed up, you can start from scratch as follows. This
should be done as a last resort and hopefully rarely.

Run the following command from the HOME folder.

Step 1: Go to the home folder, just in case you are not there.

% cd


Step 2: Rename Homeworks to a another folder, e.g., Homeworks.old.

% mv Homeworks Homeworks.old

Step 3: Get a fresh copy of the Homeworks folder.

% git clone https://github.com/aprakashumich/{HOMEWORKREPO} Homeworks

{HOMEWORKREPO} should be hw_182w13 for 2013 Winter semester, hw_182f13
for 2013 winter semester, etc.

STEP 4: Remove server-side repository (it is actually just renamed)
% cd Homeworks
% removebackups.sh {UNIQUENAME}

Replace {UNIQUENAME} by your uniquename.

STEP 5: Create a fresh backup repository on the server.
% createbackup.sh {UNIQUENAME}

Replace {UNIQUENAME} by your uniquename.

STEP 6:  Backup 

% dobackup.sh {UNIQUENAME}

STEP 7: Transfer your files from the old Homeworks, if needed.

You will need to transfer files from Homeworks.old created at Step 2 to the new Homeworks folder. You can use the File Browser to do this.

 











------------------------------------------------------------------
The following are for the future. Not yet implemented.
------------------------------------------------------------------

Granting permission to a partner to your repository: 
-------------------------------------------------------

If you wish to give permission to a partner to use your ITD repository, you can do so by running:

% grantpermission.sh YOUR_UNIQUEID PARTNER_UNIQUEID

Note: The above grants permission to your partner to see all your homeworks,
including earlier ones.

To revoke partner's permission for future updates, do the following:

% revokepermission.sh YOUR_UNIQUEID PARTNER_UNIQUEID

Using a partner's repository after you have been granted access:
----------------------------------------------------------------

Do this one time:
% uspartnerbackup.sh YOUR_UNIQUEID PARTNER_UNIQUEID








