build: clean
	cc -o gw godwords.c session.c utils.c

clean:
	rm -rf gw

install: build
	mkdir -p /usr/local/bin
	cp -f gw /usr/local/bin
	chmod 755 /usr/local/bin

uninstall:
	rm -rf /usr/local/bin/gw
