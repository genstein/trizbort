<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
<!-- Assert that we are compliant with HTML 4.01 strict, above. This helps avoid browsers taking a wild stab at our intentions. -->
<!-- In case our HTTP server fails to provided a Content Type header, assert that we are HTML encoded as UTF8. -->
<meta http-equiv="Content-Type" content="text/html;charset=utf-8" >
<title>Trizbort, the Interactive Fiction Mapper</title>
<!--
	By default, our page loads with all content visible, and no
	navigation buttons, for people with Javascript sensibly
	disabled.
	The following script will show the navigation buttons, hide
	all sections but the first one, and permit the navigation
	buttons to be used to navigate between sections.
-->
<script type="text/javascript">
<!--
	// the list of sections in this document, by id (<div id="...">)
	var sections =
	[
		'overview',
		'media',
		'download',
		'help',
		'feedback',
	];

	function hideExcept(sectionName) {
		for (var index=0; index<sections.length; ++index) {
			var currentName = sections[index];
			var current = document.getElementById(currentName);
			if (current) {
				current.style.display = (currentName == sectionName) ? 'block' : 'none';
			}
		}
	}
	
	// switch to the given section name, rendering it visible and all other sections invisible
	function switchTo(sectionName) {
		if ( !location.href.match(/help/i) ) {
			// we're on the index page (case-insensitive)
			if (sectionName === "help") {
				// help is not on the index page
				location = "help/";
				return;
			}
			// everything else is on this (the index) page
		}
		else
		{
			// we're not on the index page
			if (sectionName === "help")
			{
				// assume we're already on the help page
				return;
			}
			else
			{
				// everything else is on the index page

				// first section is "http://site/", not "http://site/#foo"
				if (sectionName === sections[0]) {
					location = "../";
					return;
				}

				location = "../#" + sectionName;
				return;
			}
		}

		hideExcept(sectionName);
		location.hash = sectionName;
	}
	
	// safely register a function to run when the page loads
	function registerOnLoad(func) {
		var previous = window.onload;
		if (typeof previous != 'function') {
			// there is no previous onload handler
			window.onload = func;
		}
		else {
			// there is a previous onload handler:
			// replace it with a new one
			window.onload = function() {
				if (previous) {
					// call the old one first
					previous();
				}
				// now call the new one
				func();
			}
		}
	}

	registerOnLoad(function() {
		if ( !location.href.match(/help/i) ) {
			// our url contains "index" or ends with "net/" as in trizbort.genstein.net/
			var currentName = location.hash;
			if (currentName) {
				// allow the location hash (e.g. "page.html#download") to navigate us to a section;
				currentName = currentName.substring(1); // strip the '#' from e.g. '#download'

				// hide all sections except the current one
				switchTo(currentName);
			}
			else {
				// lacking a location hash, we start at the first section
				currentName = sections[0];
				hideExcept(currentName)
			}
			
		}
		
		// show the navigation buttons
		document.getElementById('navigation').style.display = 'block';
		
	})
// -->
</script>
