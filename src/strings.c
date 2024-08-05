#include "../include/strings.h"

char * readFile (char * filename){  //Function 1

    FILE * fptr = fopen(filename, "r"); //open file in read mode
    char * forString;
    char getC;
    int fileLength, i = 0;

    if (fptr == NULL){
        printf("Unable to open file\n");
        return 0;
    }
   
   fseek(fptr,0,SEEK_END);  //setting file pointer to the end of file
   fileLength = ftell(fptr); //storing the length of the file
   fseek(fptr,0,SEEK_SET);  //taking file pointer back to the start of file

   forString = malloc(sizeof(char) * (fileLength + 1)); //allocating space for the file contents 

   while((getC = fgetc(fptr)) != EOF){ 
        forString[i] = getC; //storing each character into forString
        i++;
   }

   forString[i] = '\0'; //declaring end of string with null terminator

   fclose(fptr);

   return forString;
}
   
void dejaVu (char * aString, int * numWords, int * numSentences){ //Function 2
    
    char nonWords[] = ".;:?!";  //arrays that hold key characters to check for 
    char noWords[] = " \n";
    *numWords = 1;
    *numSentences = 0;
    int j = 1;
 

    for(int i = 0; i < strlen(aString); i++){
        if((strchr(nonWords,aString[i]) != NULL) && (aString[i] != aString[j])){ 
            (*numSentences)++; //checking if string has the terminator to be declared a sentence then incrementing it 
        }
        if((strchr(noWords,aString[i]) != NULL) && (aString[i] != aString[j])){
            (*numWords)++;  //checking if string has the terminator to be declared a word then incrementing it 
        }
        j++;
    }

    printf("Number of words = %d\n", *numWords);
    printf("Number of sentences = %d\n", *numSentences);
}

char * goBig (char * aString){  //Function 3

   int counter = 0;
   int stringLength = strlen(aString);
   char * newString;
   int * ptr = malloc(sizeof(int) * stringLength);
   int forCheck;
   
   printf("Enter %d positive integers: ", stringLength); //taking user input
   for(int i = 0; i < stringLength; i++){
       scanf("%d", &forCheck);
       if(forCheck <= 0){
           do{
            printf("Invalid Input, Please input a number > 0\n");
            scanf("%d", &forCheck);
            }while(forCheck <= 0); 
        }
       ptr[i] = forCheck;//scanning in the numbers into dynamic array
       counter = counter + ptr[i]; //keeping track of the total number of chars in the string with counter
    }
    newString = malloc(sizeof(char) * (counter + 1)); //Allocating exact space for new string
    int j = 0;
    for(int i = 0; i < counter; i++){
        int count = 1;
        while(count <= ptr[i] && j < counter){ 
            newString[j] = aString[i]; //assigning the same char to newString in the 'jth' position
            count++;                   //j is being incremented and we only go until the user wanted us to
            j++;
            }
    }
    newString[j] = '\0';
    return newString;
}

char ** goAway (char * aString, int * numWordsReturned){ //Function 4
  
    *numWordsReturned = 0;
    char **sptr;
    char *splitString;
    char *splitString2;
    char noWords[] = " \n";
    char myString[10000];
    char anotherString[10000];

    strcpy(myString, aString);
    strcpy(anotherString, aString);

    splitString = strtok(myString,noWords);
    while(splitString != NULL){
        (*numWordsReturned)++;  //using strtok to split string up into words and count the words
        splitString = strtok(NULL, noWords);
    }

    sptr = malloc(sizeof(char *) * (*numWordsReturned)); //allocating space for the rows of words

    splitString2 = strtok(anotherString,noWords); //get the first word
    int j = 0; 
    while(splitString2 != NULL){
        int k = 0;
        sptr[j] = malloc(sizeof(char) * (strlen(splitString2) + 1)); // allocate the exact space needed
        for(int i = 0; i < strlen(splitString2); i++){
            sptr[j][k] = splitString2[i];
            k++;
        }
        sptr[j][k] = '\0';
        j++;
        splitString2 = strtok(NULL,noWords);
    }
    return sptr;
    
}

char * breathless (char * aString){ //Function  5
    
    char punctuation[] = ".:;?!"; //array to hold our punctuation delimiters
    int stringLength = strlen(aString);
    for(int i = 0; i < stringLength; i++){  //first loop to run through the string
        for(int j = 0; j < strlen(punctuation); j++){ //second loop to run through the punctuation delimiters
            if(aString[i] == punctuation[j]){  //if we find the punctuation,
                for(int b = i; b < stringLength; b++){
                    aString[b] = aString[b + 1]; //we move the characters one position to the left if met with punctuation
                }
                stringLength--; //minus the stringLength because we removed a char
                i--; //minus i to recheck the character
            }
        }
    }
    return aString;

}

void tail (char * aString, int whichWord, char * desiredSuffix){
   
    int numWordsReturned, counter = 0;
    char emptyString[MAX_STR];
    char newString[MAX_STR];
    aString = breathless(aString); //Call function to remove punctuation
    char ** array = goAway(aString, &numWordsReturned);  //Put string into 2d Array with this function

   
    if(whichWord <= 0 || whichWord > numWordsReturned){
        printf("Invalid Input, this number is out of range\n");
    }
    whichWord = whichWord - 1;
    
    for(int i = 0; i < numWordsReturned; i++){
        if(whichWord == i){
            for(int j = 0; j < strlen(array[i]); j++){
                 emptyString[j] = array[i][j];
                 counter++;
           }
        }
    }
    emptyString[counter] = '\0';

    for(int i = 0; i < strlen(emptyString); i++){
        int k = 0;
        newString[k] = emptyString[i];
        strcat(newString, desiredSuffix);
        printf("%s\n", newString);
        strcpy(newString," ");
    }
}

