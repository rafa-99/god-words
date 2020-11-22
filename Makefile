build: clean
		gcc -o ouija ouija.c logic.c utils.c

debug: clean
		gcc -g -o ouija ouija.c logic.c utils.c

clean:
		rm -rf ouija