build: clean
	cc -o ouija ouija.c session.c utils.c

clean:
	rm -rf ouija

install: build
	mkdir -p /usr/local/bin
	cp -f ouija /usr/local/bin
	chmod 755 /usr/local/bin

uninstall:
	rm -rf /usr/local/bin/ouija
