
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STR 500

char * readFile (char * filename); 

void dejaVu (char * aString, int * numWords, int * numSentences);

char * goBig (char * aString);

char ** goAway (char * aString, int * numWordsReturned);

char * breathless (char * aString);

void tail (char * aString, int whichWord, char * desiredSuffix);

