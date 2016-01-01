ttf2ugui
========

This is a simple utility to convert TrueType fonts into uGUI compatible
structures. It reads font file, renders each character into bitmap
and outputs it as uGUI compatible C structure. 

Optionally it can display ascii art sample of font by using
UGUI to render pixels as '*' with ansi escape sequences.

Please remember to respect font copyrights when converting.

Examples:

Convert font in Luna.ttf to 14 point size bitmap font for 140 DPI display:

ttf2ugui --font Luna.ttf --dpi 140 --size 14 --dump > luna.c

Show ascii art of same font:

ttf2ugui --font Luna.ttf --dpi 140 --size 14 --show

