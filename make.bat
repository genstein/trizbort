@echo This dubious script will produce (overwrite ) index.html in / and /help.
@echo It also copies webservice.html to webservice.php.
@pause
cat header1.inc css.inc header2.inc overview.inc media.inc download.inc help.inc feedback.inc footer.inc > index.html
cat header1.inc css.inc header2.inc help\index.shtml footer.inc > help\index.html
cp webservice.html webservice.php
