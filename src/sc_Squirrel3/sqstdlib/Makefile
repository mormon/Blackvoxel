SQUIRREL= ..


OUT=$(SQUIRREL)/lib/libsqstdlib.a
INCZ= -I$(SQUIRREL)/include -I. -Iinclude

OBJS= \
	sqstdblob.o \
	sqstdio.o \
	sqstdstream.o \
	sqstdmath.o \
	sqstdsystem.o \
	sqstdstring.o \
	sqstdaux.o \
	sqstdrex.o
	
SRCS= \
	sqstdblob.cpp \
	sqstdio.cpp \
	sqstdstream.cpp \
	sqstdmath.cpp \
	sqstdsystem.cpp \
	sqstdstring.cpp \
	sqstdaux.cpp \
	sqstdrex.cpp
	

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
	$(CC) $(CFLAGS) -c $(SRCS) $(INCZ)
	ar rc $(OUT) *.o
	rm *.o

.PHONY: clean mrproper
	
clean:
	rm -f *.o
	rm -f $(OUT)

mrproper: clean

# vim: set tabstop=4:softtabstop=4:shiftwidth=4:noexpandtab
