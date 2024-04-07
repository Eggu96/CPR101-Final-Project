//MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 //Declares the size of buffer
#include "manipulating.h" //Includes manipulating header file

// Version 1 of manipulating module
void manipulating(void) { //Prints the message of demo
	printf("*** Start of Concatenating Strings Demo ***\n");
	//Declares variables and stores to input string
	char string1[BUFFER_SIZE * 2];
	char string2[BUFFER_SIZE];
	do { //Loops until user input is "q"	
		printf("Type the 1st string (q - to quit):\n"); //Prompts user to input for 1st string
		fgets(string1, BUFFER_SIZE, stdin); // Reads input from 1st string and stores into string1
		string1[strlen(string1) - 1] = '\0'; //Removes newline from the end of the input string1
		if ((strcmp(string1, "q") != 0)) { //Checking if input not equal to "q"
			printf("Type the 2nd string:\n"); //Prompts user to input for 2nd string
			fgets(string2, BUFFER_SIZE, stdin); //Reads input from 2nd string and stores into string2
			string2[strlen(string2) - 1] = '\0'; //Removes newline from the end of the input string2
			strcat(string1, string2); //Concatenating the 2nd string to the end of the 1st string
			printf("Concatentated string is \'%s\'\n", string1); //prints the concatenated string
		}
	} while (strcmp(string1, "q") != 0); //Repeats loop until the first string input is "q"
	printf("*** End of Concatenating Strings Demo ***\n\n"); //Displays end of demo message
}