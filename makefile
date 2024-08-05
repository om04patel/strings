stringMe: strings.o stringsMain.o
	gcc strings.o stringsMain.o -o bin/stringMe

strings.o: src/strings.c include/strings.h
	gcc -Wall -std=c99 -c src/strings.c

stringsMain.o: src/stringsMain.c include/strings.h
	gcc -Wall -std=c99 -c src/stringsMain.c

clean:
	rm *.o bin/stringMe