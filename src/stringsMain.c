#include "../include/strings.h"

int main(int argc, char * argv[]){

    int numWords,numSentences, numWordsReturned;

   // printf("FUNCTION 1 \n\n");

    char * forString = readFile(argv[1]);  //Calling function 1

   // printf("%s\n\n", forString); //testing function 1

   // printf("%lu is the length of the string\n", strlen(forString)); //testing length of characters

    //printf("FUNCTION 2\n\n");
    dejaVu(forString, &numWords, &numSentences); //testing function 2
     
   // printf("FUNCTION 3\n\n");
    char * newString = goBig("hello!");  //Calling function 3

   // printf("%s\n", newString); //testing function 3

   // printf("FUNCTION 4\n\n");
    char ** myString = goAway(forString, &numWordsReturned); //testing function 4

  //  for(int i = 0; i < numWordsReturned; i++){
    //    printf("%s\n", myString[i]);
   // }
    
    char string[] = "What was the colour of the dress? Oh, it was red!";
   // printf("FUNCTION 5\n\n");
   // printf("%lu\n", strlen(string)); //testing function 5
   // printf("%s\n", string);
    breathless(string);
   // printf("%s\n",string);
   // printf("%lu\n", strlen(string));

    char nowString[] = "Now is the winter of our discontent Made glorious summer by this Sun of York.";
    char desiredSuffix[] = "otter";
   // printf("FUNCTION 6\n\n");
    tail(nowString, 3, desiredSuffix);
    return 0;
}
