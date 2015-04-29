
SQUIRREL=.

export CPU_BITS
all:
	$(MAKE) -C squirrel
	$(MAKE) -C sqstdlib
	$(MAKE) -C sq

.PHONY: clean mrproper

clean:
	$(MAKE) -C squirrel clean
	$(MAKE) -C sqstdlib clean
	$(MAKE) -C sq clean

mrproper:
	$(MAKE) -C squirrel mrproper
	$(MAKE) -C sqstdlib mrproper
	$(MAKE) -C sq mrproper

# vim: set tabstop=4:softtabstop=4:shiftwidth=4:noexpandtab

