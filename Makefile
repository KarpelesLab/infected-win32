#!/bin/make

CC=i686-w64-mingw32-gcc
CFLAGS=-Wall -mwindows
TARGET=infected-win32.exe
OBJS=main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $<
	strip $@

clean:
	$(RM) $(TARGET) $(OBJS)
