// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h" // Include header file if needed

// V1
void fundamentals(void) { // Function to demonstrate index strings
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE]; //Declare buffer for input string and character position
	char numInput[NUM_INPUT_SIZE];
	size_t position;
	do { // Main loop
		printf("Type not empty string (q - to quit):\n"); // Prompt user for input string
		fgets(buffer1, BUFFER_SIZE, stdin); // Reads input from user
		buffer1[strlen(buffer1) - 1] = '\0'; // Remove newline character from input
		if (strcmp(buffer1, "q") != 0) { // Check if user wants to quit
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin); // Read character position from user
			numInput[strlen(numInput) - 1] = '\0'; // Removes newline character from input
			position = atoi(numInput); // Converts input to integer
			if (position >= strlen(buffer1)) { // Check if position is within the bounds of the string input
				position = strlen(buffer1) - 1; //Checks if position is too big, adjust to maximum avilable
				printf("Too big. Position reduced to max. available\n");
			} //Print the character at the position
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0); // Continue until user inputs 'q' to quit
	printf("*** End of Indexing Strings Demo ***\n\n"); // End of index strings demonstration
}