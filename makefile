stringMe: patelOmA2.o patelOmA2Main.o
	gcc patelOmA2.o patelOmA2Main.o -o bin/stringMe

patelOmA2.o: src/patelOmA2.c include/patelOmA2.h
	gcc -Wall -std=c99 -c src/patelOmA2.c

patelOmA2Main.o: src/patelOmA2Main.c include/patelOmA2.h
	gcc -Wall -std=c99 -c src/patelOmA2Main.c

clean:
	rm *.o bin/stringMe