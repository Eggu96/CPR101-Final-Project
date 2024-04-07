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
	
	// Version 2 of Manipulating Module
	//Prints the start of demo message
	printf("*** Start of Comparing Strings Demo ***\n");
	//Declares variables and stores user input
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	int result; //Declare integer value to store the result of string comparison
	do { //Do loop until user input is "q"
		printf("Type the 1st string to compare (q - to quit):\n"); //Prompts user input
		fgets(compare1, BUFFER_SIZE, stdin); //Reads user input using standard input (stdin) and stores into compare1
		compare1[strlen(compare1) - 1] = '\0'; //Removes newline character from user input
		if (strcmp(compare1, "q") != 0) { //Checks if input not equal to "q"
			printf("Type the 2nd string to compare:\n"); //Prompts user input for 2nd string
			fgets(compare2, BUFFER_SIZE, stdin); //Reads user input and stores into compare2
			compare2[strlen(compare2) - 1] = '\0'; //Removes newline character from user input
			result = strcmp(compare1, compare2); // Compares string compare1 and compare2 and stores data into result
			if (result < 0) { //Checks the result comparison and prints the appropriate message
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			}
			else if (result == 0) {
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			}
			else {
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
			}
		}
	} while (strcmp(compare1, "q") != 0); //Continue loop until input is "q"
	printf("*** End of Comparing Strings Demo ***\n\n"); //Displays End of Demo Message
	
	// Version 3 of Manipulating Module
	//Prints Start Of Demo Message
	printf("*** Start of Searching Strings Demo ***\n");
	//Declares variables and stores user input
	char haystack[BUFFER_SIZE];
	char needle[BUFFER_SIZE];
	char* occurrence = NULL; //Pointer to store the occurrence of the needle in haystack
	do { //Repeatedly prompts user for input
		printf("Type the string (q - to quit):\n"); //Prompts for user input
		fgets(haystack, BUFFER_SIZE, stdin); //Reads input and stores into haystack
		haystack[strlen(haystack) - 1] = '\0'; //Removes newline character from input
		if (strcmp(haystack, "q") != 0) { //Checks if input not equal to "q"
			printf("Type the substring:\n"); //Prompts for user input
			fgets(needle, BUFFER_SIZE, stdin); //Reads input and stores into needle
			needle[strlen(needle) - 1] = '\0'; //Removes newline from input
			occurrence = strstr(haystack, needle); //Search for the needle in the haystack
			if (occurrence) { //Check if the needle is found
				printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack)); //Prints position of occurrence
			}
			else { //Prints message if needle isn't found
				printf("Not found\n");
			}
		}
	} while (strcmp(haystack, "q") != 0); //Continues loop until user inputs "q"
	printf("*** End of Searching Strings Demo ***\n\n"); //Displays End Of Demo Message
}