/*
Student Name: Om Patel
Student ID: 1245504
Due Date: March 3 2023
Course: CIS*2500

I have exclusive control over this submission via my password.
By including this header comment, I certify that:
  1) I have read and understood the policy on academic integrity.
  2) I have completed Moodle's module on academic integrity.
  3) I have achieved at least 80% on the academic integrity quiz.
I assert that this work is my own. I have appropriately acknowledged any and all
material that I have used, be it directly quotes or 
paraphrased. Furthermore, I certify that this assignment was written
by me in its entirety.
*/

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

