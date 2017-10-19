ttf2ugui
========

[uGUI][1] is a free open source graphics library for embedded systems. 
To display text, it uses bitmap/raster fonts, that are included
in application as C-language structs & arrays. uGUI includes
some fonts in itself, but I wanted to use some TrueType fonts.

I didn't find a tool that would convert a .ttf file into
C structures used by uGUI easily, so I wrote one using
[Freetype library][2].

This is a simple utility to convert TrueType fonts into uGUI compatible
structures. It reads font file, renders each character into bitmap
and outputs it as uGUI compatible C structure. 

Optionally it can display ascii art sample of font by using
UGUI to render pixels as '*' with ansi escape sequences.
Fonts generated with 8BPP show in blue pixels with less then 100% fill.

Please remember to respect font copyrights when converting.

Examples:

Convert font in Luna.ttf to 14 point size bitmap font for 140 DPI display:

ttf2ugui --font Luna.ttf --dpi 140 --size 14 --dump

Results are in Luna.c and Luna.h, just compile the
.c and include .h in your uGUI application.

Show ascii art of same font:

ttf2ugui --font Luna.ttf --dpi 140 --size 14 --show "aString"

If you want to generate 8BPP fonts ( so you get anti alliased fonts ) use

ttf2ugui --font Luna.ttf --dpi 140 --size 14 --show "aString" --bpp=8

Compiling
---------

To compile, freetype library is needed. Easiest way
to get is to install suitable package for your operating system.

For FreeBSD, install "print/freetype2".
For Debian, install libfreetype6-dev with apt-get.

Then, just type "make".

[1]: http://www.embeddedlightning.com/ugui/
[2]: http://freetype.org/
