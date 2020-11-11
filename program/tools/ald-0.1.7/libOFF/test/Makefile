# libOFF
# test Makefile
# Copyright (C) Patrick Alken 2003
# $Id: Makefile.in,v 1.1.1.1 2004/04/26 00:40:33 pa33 Exp $

CC = gcc
CFLAGS = -g -O2
RM = @RM@ -f
LDFLAGS = -L../../lib
LIBS = -lOFF
INCLUDE = -I../include

all: id

id: id.c ../../lib/libOFF.a
	$(CC) $(CFLAGS) $(INCLUDE) -o id id.c $(LDFLAGS) $(LIBS)

clean:
	$(RM) id

distclean: clean
	$(RM) Makefile

# End of test/Makefile
