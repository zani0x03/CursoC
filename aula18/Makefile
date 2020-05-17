all:
	gcc -o readpe readpe.c -L./lib -lpetest

clean:
	rm -f readpe

install:
	install -m 0644 libpetest.so /usr/lib/libpetest.so

uninstall:
	rm -f /usr/lib/libpetest.so
