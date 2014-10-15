all: library

library:
	$(MAKE) -C lib all

clean:
	$(MAKE) -C lib clean

purge:
	$(MAKE) -C lib purge
