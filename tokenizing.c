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
	
	// Version 2 of Tokenizing Module
	//Displays Start of Demo Message
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	//Declares variables and stores user data
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int phrasesCounter; //Declares integer data type to count the number of phrases
	do { // Loop repeats until user input is "q"
		printf("Type a few phrases separated by comma(q - to quit):\n"); //Prompts user input
		fgets(phrases, BUFFER_SIZE, stdin); //Reads user input and stores into phrases
		phrases[strlen(phrases) - 1] = '\0'; //Removes newline character from user input
		if ((strcmp(phrases, "q") != 0)) { //Check if user input not equal to "q"
			nextPhrase = strtok(phrases, ","); //Tokenize the input string using the comma as a delimiter
			phrasesCounter = 1; //Initialize counter for phrases
			while (nextPhrase) { //Iterate through tokenized phrases and print each one
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); //prints current phrase
				nextPhrase = strtok(NULL, ","); //Moves to next Phrase
			}
		}
	} while (strcmp(phrases, "q") != 0); //Continue loop until input is "q"
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); //Displays End Of Demo Message
	
	//Version 3 of Tokenizing Module
	//Prints Start Demo Message
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	//Declares variables and store user input and a pointer for tokenizing
	char sentences[BUFFER_SIZE];
	char* nextSentence = NULL; 
	//Declares an integer variable to count the number of Sentences
	int sentencesCounter;
	do { //Repeatedly prompts for user input
		printf("Type a few sentences separated by dot(q - to quit):\n"); //Prompt user input
		fgets(sentences, BUFFER_SIZE, stdin); //Reads input and stores into sentences
		sentences[strlen(sentences) - 1] = '\0'; //Removes newline character from input
		if ((strcmp(sentences, "q") != 0)) { //Checks if input not equal to "q"
			nextSentence = strtok(sentences, "."); //Tokenizing the input string using dot as delimiter
			sentencesCounter = 1; //Initialize the counter for sentences
			while (nextSentence) { //Iterate tokenized sentences and print each one
				printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence); //Print Current Sentence
				nextSentence = strtok(NULL, "."); //Move to the next token
			}
		}
	} while (strcmp(sentences, "q") != 0); //Loop continues until User Input is "q"
	printf("*** End of Tokenizing Sentences Demo ***\n\n"); //Displays End Of Demo Message
}