This is the folder where you should keep your homework code.

Do the following one time:
--------------------------

% createbackup.sh YOUR_UNIQUENAME

This creates a version-controlled backup repository in your ITD storage space. 
It will maintain both old and current versions of your system as long as you remember to run the next command to backup your files often.

Doing a backup: Do this frequently. Even every hour or a few minutes.
--------------------------------------------------------------------

% dobackup.sh YOUR_UNIQUENAME

This backups your edits to ITD repository in your account. RUN THIS 
FREQUENTLY. OTHERWISE, NOTHING IS BACKED UP!

That way, if you ever lose your files (e.g., accidental deletion, Mint
corruption, or loss of your laptop), we can help you restore them. 

Restoring files
-----------------

% dorestore.sh YOUR_UNIQUENAME

should restore any missing files from the latest backup. This should be safe 
to run. It will simply tell you that your files are up to date if nothing
needs to be restored.  If you have corrupted a file totally and wish to bring
it back, then delete it and the run the above program to restore it from the
last backup.



