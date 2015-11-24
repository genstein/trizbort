<!-- Common styles for the site -->
<style type="text/css">
html, body
{
	margin: 0px;
	background-color: #000000;
}
.domainbar
{
	clear: both;
	background-color: #570057;
	color: #ccbb66;
	float: left;
	width: 100%;
	height: 50px;
	line-height: 50px;
	text-align: left;
	font-family: Georgia, Sans Serif;
}
.topdomainbar
{
	border-bottom: 4px solid #300030;
}
.bottomdomainbar
{
	border-top: 4px solid #300030;
}
.domainbar_indent
{
	padding-left: 12px;
}
.sitebacklink
{
	float: right;
	padding-right: 20px;
	text-decoration: none;
	color: #ccbb66;
}
.sitebacklink:hover
{
	text-decoration: underline;
}
.sitebacklink:visited
{
	color: #ccbb66;
}
.areabar
{
	clear: both;
	float: left;
	width: 100%;
	background-color: #000000;
	color: #ffffff;
	font-family: Palatino, Serif;
	border-bottom: 1px solid #777777;
}
.siteheading
{
	font-family: Georgia, Sans Serif;
	font-size: 16px;
	font-weight: 100;
	float: left;
}
.areabar_indent
{
	padding: 48px;
}
.areabar_superheading
{
	font-size: 50px;
	font-weight: 400;
	color: #ffffff;
}
.areabar_majorheading
{
	font-size: 25px;
	font-weight: 100;
	color: #909090;
}
.areabar_quote
{
	font-family: Palatino, Serif;
	font-size: 12px;
	font-weight: 100;
	color: #505050;
	padding-top: 4px;
}
.buttonbar
{
	overflow: hidden;			/* This chops off any overhanging divs */
	clear: both;
	width: 100%;
	background-color: #a0a0a0;
	display: none;
	border-bottom: 1px solid #406090;
	line-height: 40px;
}
.buttonbar_indent
{
	padding-left: 48px;
	padding-right: 0px;
	padding-top: 10px;
	padding-bottom: 0px;
}
a.button:link
{
	color: #c0c0c0;
	background-color: #406090;
	text-decoration: none;
	font-variant: small-caps;
	padding: 10px;
	border-left: 1px solid #204070;
	border-right: 1px solid #204070;
	border-top: 1px solid #204070;
}
a:link
{
	color: #406090;
	text-decoration: underline;
}
a:link:visited
{
	color: #570057;
}
a:link:hover
{
	color: #ccbb66;
}
a:link:active
{
}
a.button:link:hover
{
	color: #ffffff;
}
a.button:link:active
{
	color: #ffffff;
}
a.button:link:visited
{
	color: #c0c0c0;
}
.bodycontainer
{
	background-color: #ffffff;
	padding-top: 0px;
	padding-bottom: 24px;
	clear: both;
	font-family: Georgia, Serif;
	font-size: 14px;
	line-height: 22px;
}
.floatingmapfragment
{
	float: right;
	padding-right: 48px;
}
	/* body text which is not columnar needs this padding */
	.indent_without_columns
	{
		padding-left: 48px;
		padding-right: 25%;
	}
	/* body text which is columnar needs this padding */
	.indent_column
	{
		padding-left: 48px;
		padding-right: 48px;
	}
	/* column container */
	.colmask {
		clear:both;
		float:left;
		width:100%;					/* width of whole page */
		overflow: hidden;			/* This chops off any overhanging divs */
		padding-left: 0px;
		padding-right: 0px;
		padding-top: 0px;
		padding-bottom: 0px;
	}
	/* common column settings */
	.colright,
	.colmid,
	.colleft {
		float:left;
		width:100%;
		position:relative;
	}
	.col1,
	.col2,
	.col3 {
		float:left;
		position:relative;
		padding: 0px;
		overflow:hidden;
	}
	/* 2 Column (double page) settings */
	.doublepage {
		background:#eee;		/* right column background colour */
	}
	.doublepage .colleft {
		right:50%;				/* right column width */
		background:#fff;		/* left column background colour */
	}
	.doublepage .col1 {
		width:50%;				/* left column content width (column width minus left and right padding) */
		left:50%;				/* right column width plus left column left padding */
	}
	.doublepage .col2 {
		width:50%;				/* right column content width (column width minus left and right padding) */
		left:50%;				/* (right column width) plus (left column left and right padding) plus (right column left padding) */
	}
h1
{
	color: #406090;
	font-family: Palatino, Serif;
	font-size: 30px;
	font-weight: 400;
	margin: 0px;
	padding-left: 0px;
	padding-right: 0px;
	padding-top: 40px;
	padding-bottom: 5px;
}
h2
{
	color: #406090;
	font-family: Palatino, Serif;
	font-size: 20px;
	font-weight: 400;
	margin: 0px;
	padding-left: 0px;
	padding-right: 0px;
	padding-top: 20px;
	padding-bottom: 5px;
}
h3
{
	color: #406090;
	font-family: Palatino, Serif;
	font-size: 16px;
	font-weight: 400;
	margin: 0px;
	padding-left: 0px;
	padding-right: 0px;
	padding-top: 20px;
	padding-bottom: 5px;
}
h4
{
	color: #406090;
	font-family: Palatino, Serif;
	font-size: 14px;
	font-weight: 400;
	margin: 0px;
	padding-left: 0px;
	padding-right: 0px;
	padding-top: 20px;
	padding-bottom: 5px;
}
table
{
	border: 1px solid black;
	border-collapse: collapse;
	font-size: 14px;
}
td
{
	padding: 6px;
	border: 1px solid black;
}
td.alt
{
	background-color: #e0e0d0;
}
td.heading
{
	border-bottom: 1px solid white;
	background-color: #5070a0;
	color: white;
	text-align: center;
}
td.altheading
{
	border-bottom: 1px solid white;
	background-color: #305080;
	color: white;
	text-align: center;
}
li
{
	margin: 4px 0px 4px 0px;
}
pre
{
	font-size: 11px;
	font-family: Consolas, Courier New, Courier, Serif;
	line-height: 14px;
}
.footnote
{
	font-size: 10px;
}
.tip
{
	float: right;
	clear: both;                /* don't put tips next to each other */
	border: 2px solid #b0b090;
	background-color: #e0e0d0;
	color: black;
	padding: 0px;
	margin-left: 10px;          /* spacing between the tip and text which flows to its left */
	margin-top: 5px;
	margin-bottom: 5px;        /* spacing between stacked tips, if any */
	width: 300px;
}
.tip .heading
{
	background-color: #305080;
	color: white;
	font-variant: small-caps;
	font-weight: bold;
	padding: 2px;
	text-align: center;
}
.tip .body
{
	padding: 0px 8px 8px 8px;
}
.tip p
{
	padding: 0px;
	margin: 5px 0px 0px 0px;
}
.tip .quote
{
	background-color: white;
	color: black;
	border: 1px solid #b0b090;
	padding: 2px;
	line-height: 23px;
}
.term
{
	font-style: italic;
}
.emphatic
{
	/* for emphasising key phrases in a paragraph; blanked since any changes appear be ugly as hell or just too emphatic; ho well. */
}
.code
{
	background-color: white;
	color: black;
	border: 1px solid #b0b090;
	padding: 2px;
	line-height: 23px;
	font-family: Consolas, Courier New, Courier, Serif;
	font-size: 12px;
}
</style>
