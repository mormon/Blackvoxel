SQUIRREL= ..

CC=g++
OUT=$(SQUIRREL)/bin/sq
INCZ= -I$(SQUIRREL)/include -I. -I$(SQUIRREL)/sqlibs
LIBZ= -L$(SQUIRREL)/lib 
LIB= -lsquirrel -lsqstdlib

OBJS= sq.o
	
SRCS= sq.c
	
ifeq ($(CPU_BITS),32)
	CFLAGS= -O2 -s -fno-exceptions -fno-rtti
else ifeq ($(CPU_BITS),prof)
	CFLAGS= -O2 -pg -fno-exceptions -fno-rtti -pie -gstabs -g3
else ifeq ($(CPU_BITS),64)
	CFLAGS= -O2 -s -m64 -fno-exceptions -fno-rtti -D_SQ64
else ifeq ($(CPU_BITS),64d)
	CFLAGS= -O0 -m64 -fno-exceptions -fno-rtti -D_SQ64 -g3
endif

$(OUT): $(SRCS)
	$(CC) $(CFLAGS) -o $(OUT) $(SRCS) $(INCZ) $(LIBZ) $(LIB)

.PHONY: clean mrproper

clean:
	rm -f *.o
	rm -rf $(OUT)

mrproper: clean

# vim: set tabstop=4:softtabstop=4:shiftwidth=4:noexpandtab
