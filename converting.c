// Converting Module Source
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 // Buffer Size
#include "converting.h" // Include converting header file

// Version 1 of the Converting Function
void converting(void) {
	printf("*** Start of Converting Strings to int Demo ***\n"); //Prints a message the start of Converting Strings Demo
	// Declaring variables to store input string and converted integer
	char intString[BUFFER_SIZE]; 
	int intNumber;
	do { // To loop until user enters "q" to quit	
		printf("Type an int numeric string (q - to quit):\n"); // Prompts user to to type an integer input
		fgets(intString, BUFFER_SIZE, stdin); // Reads input string from the standard input (stdin) and stores it into intString
		intString[strlen(intString) - 1] = '\0'; //Removes newline character at the end of the input string
		if (strcmp(intString, "q") != 0) { //Checking if input string is not equal to q
			intNumber = atoi(intString); //Converts input string to an integer by using atoi function
			printf("Converted number is %d\n", intNumber); // Prints the converted integer value
		}

	} while (strcmp(intString, "q") != 0); //Repeats loop until input is "q" 
	printf("*** End of Converting Strings to int Demo ***\n\n"); // Displays End of Converting Strings Message
	
	//Version 2 of Converting Module
	//Displays Title of Demo
	printf("*** Start of Converting Strings to double Demo ***\n");
	//Declares variables
	char doubleString[BUFFER_SIZE];
	double doubleNumber;
	do { //Loops until user enters "q"
		printf("Type the double numeric string (q - to quit:\n"); //Prompts user for input 
		fgets(doubleString, BUFFER_SIZE, stdin); //Reads input from standard input (stdin) and stores into doubleString
		doubleString[strlen(doubleString) - 1] = '\0'; //Removes newline character from input
		if ((strcmp(doubleString, "q") != 0)) { //Check if user input not equal to "q"
			doubleNumber = atof(doubleString); //Convert string to double by using atof function
			printf("Converted number is %f\n", doubleNumber); //Prints converted number
		}
	} while (strcmp(doubleString, "q") != 0); //Continues loop until user enters "q"
	printf("*** End of Converting Strings to double Demo ***\n\n"); //Displays end of demo message
	
	//Version 3 of Converting Module
	//Displays Modules Beginning Message
	printf("*** Start of Converting Strings to long Demo ***\n");
	//Declares character array to store user input and a variable for the converted long integer
	char longString[BUFFER_SIZE];
	long longNumber;
	do { //Starts loop until user input "q"
		printf("Type the long numeric string (q - to quit): \n"); //Prompts user input
		fgets(longString, BUFFER_SIZE, stdin); //Reads user input and stores into longString
		longString[strlen(longString) - 1] = '\0'; //Removes newline from user input
		if ((strcmp(longString, "q") != 0)) { //Checks if input not equal to "q"
			longNumber = atol(longString); //Convert the string to a long integer using atol function
			printf("Converted number is %ld\n", longNumber); //Prints the converted number
		}
	} while (strcmp(longString, "q") != 0); //Continues loop until "q" is entered
	printf("*** End of Converting Strings to long Demo ***\n\n"); //Displays End Of Demo Message
}