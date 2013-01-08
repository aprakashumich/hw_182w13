This is the folder where you should keep your homework code.

Do the following one time:
--------------------------

% createbackup.sh YOUR_UNIQUENAME

This creates a version-controlled backup repository in your ITD storage space. 
It will maintain both old and current versions of your system as long as you remember to run the next command to backup your files often.

Note: The IAs/TAs and Professor will also have read/write access to your homework 
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








