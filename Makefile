CFLAGS = -Wall -g -Iugui -I/usr/local/include/freetype2 -I/usr/include/freetype2

OBJS= ttf2ugui.o ugui/ugui.o ugui/utf8_decode.o ugui/utf8_to_utf16.o

all: $(OBJS)
	cc -g -o ttf2ugui $(OBJS) -L/usr/local/lib -lfreetype

clean:
	rm -f $(OBJS)
	rm -f ttf2ugui
