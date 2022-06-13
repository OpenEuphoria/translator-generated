CC     = gcc
CFLAGS =  -fomit-frame-pointer -c -w -fsigned-char -O2  -I/home/leprechaun/Source/euphoria -ffast-math
LINKER = gcc
HELLO_SOURCES = init-.c \
	 hello.c \
	 main-.c
HELLO_OBJECTS = init-.o \
	 hello.o \
	 main-.o
HELLO_GENERATED_FILES =  init-.c \
	 init-.o \
	 main-.h \
	 hello.c \
	 hello.o \
	 main-.c \
	 main-.o \
	 hello.lnk

"/home/leprechaun/Source/translator-generated/hello/hello" : $(HELLO_OBJECTS) /home/leprechaun/Source/euphoria/source/build/eu.a
	$(LINKER) @hello.lnk

hello-clean : .SYMBOLIC
	del "init-.o"
	del "hello.o"
	del "main-.o"

hello-clean-all : .SYMBOLIC
	del "/home/leprechaun/Source/translator-generated/hello/hello"
	del "init-.c"
	del "init-.o"
	del "main-.h"
	del "hello.c"
	del "hello.o"
	del "main-.c"
	del "main-.o"
	del "hello.lnk"

.c.obj : .autodepend
	$(CC) $(CFLAGS) $<

