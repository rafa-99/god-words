build: clean
	cc -o trt tongues.c session.c utils.c

clean:
	rm -rf trt

install: build
	mkdir -p /usr/local/bin
	cp -f trt /usr/local/bin
	chmod 755 /usr/local/bin

uninstall:
	rm -rf /usr/local/bin/trt
