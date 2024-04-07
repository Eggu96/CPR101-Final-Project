// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 //Defines the size of buffer size
#include "tokenizing.h" //Includes tokenizing header file

//Version 1 of Tokenizing
void tokenizing(void) { //Prints the start of Tokenizing Words Demo
	printf("*** Start of Tokenizing Words Demo ***\n");
	//Declares variable to store input words and nextWord
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;
	do { //Loops until user enters "q"	
		printf("Type a few words separated by space (q - to quit):\n"); //Prompts user to input words	
		fgets(words, BUFFER_SIZE, stdin); // Reads input words from the standard input (stdin) and stores into words
		words[strlen(words) - 1] = '\0'; // Removes newline character at the end of the input
		if (strcmp(words, "q") != 0) { // Checks if input words are not equal to q
			nextWord = strtok(words, " "); // Extracts the first word using strtok function
			wordsCounter = 1; //Initalizing the word counter
			while (nextWord) { //print the current word and its position
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " "); //Extracts next word
			}
		}
	} while (strcmp(words, "q") != 0); // Repeats loop until the input is "q"
	printf("*** End of Tokenizing Words Demo ***\n\n"); // Displays end message of demo
}