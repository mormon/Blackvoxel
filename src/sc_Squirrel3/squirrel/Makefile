SQUIRREL= ..

CC=gcc
OUT=$(SQUIRREL)/lib/libsquirrel.a
INCZ= -I$(SQUIRREL)/include -I. -Iinclude
DEFS= 
LIB=	

OBJS= \
	sqapi.o \
	sqbaselib.o \
	sqfuncstate.o \
	sqdebug.o \
	sqlexer.o \
	sqobject.o \
	sqcompiler.o \
	sqstate.o \
	sqtable.o \
	sqmem.o \
	sqvm.o \
	sqclass.o

SRCS= \
	sqapi.cpp \
	sqbaselib.cpp \
	sqfuncstate.cpp \
	sqdebug.cpp \
	sqlexer.cpp \
	sqobject.cpp \
	sqcompiler.cpp \
	sqstate.cpp \
	sqtable.cpp \
	sqmem.cpp \
	sqvm.cpp \
	sqclass.cpp


ifeq ($(CPU_BITS),32)
	CFLAGS= -O2 -fno-exceptions -fno-rtti -Wall -fno-strict-aliasing
else ifeq ($(CPU_BITS),prof)
	CFLAGS= -O2 -pg -fno-exceptions -fno-rtti -pie -gstabs -g3 -Wall -fno-strict-aliasing
else ifeq ($(CPU_BITS),64)
	CFLAGS= -O2 -m64 -D_SQ64 -fno-exceptions -fno-rtti -Wall -fno-strict-aliasing
else ifeq ($(CPU_BITS),64d)
	CFLAGS= -O0 -g3 -m64 -D_SQ64 -fno-exceptions -fno-rtti -Wall -fno-strict-aliasing
endif

$(OUT): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) $(INCZ) $(DEFS)
	ar rc $(OUT) *.o
	rm *.o

.PHONY: clean mrproper

clean:
	rm -f *.o
	rm -f $(OUT)

mrproper: clean

# vim: set tabstop=4:softtabstop=4:shiftwidth=4:noexpandtab
