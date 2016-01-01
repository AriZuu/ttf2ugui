CFLAGS = -Wall -g -I/usr/local/include/freetype2

all: ttf2ugui.o ugui.o
	cc -g -o ft -L/usr/local/lib ttf2ugui.o ugui.o -lfreetype
