#include "fundamentals.h" //includes fundamentals header file
#include "manipulating.h" //includes manipulating header file
#include "converting.h" //includes converting header file
#include "tokenizing.h" //includes tokenizing header file

int main(void) { //Main Function for module selection
	char buff[10]; //Declares a character array to store user input
	do {
		printf("Which module to run?\n"); //Dislays module selection 
		printf("1 - Fundamentals\n"); 
		printf("2 - Manipulating\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Finish\n"); //Exits out of program
		printf("Your selection: "); //Prompts user for selection input based on selection options
		fgets(buff, 10, stdin); //Reads user input and stores into buff
		switch (buff[0]) { //Switching based on user input
		case '1': fundamentals(); //If 1 is selected, run fundamentals module
			break; 
		case '2': manipulating(); //If 2 is selected, run manipulating module
			break;
		case '3': converting(); //If 3 is selected, run converting module
			break;
		case '4': tokenizing(); //If 4 is selected, run tokenizing module
			break;
		case '0':
			break;
		default: printf("Bad selection!\n"); //If user inputs invalid selection
		}
	} while (buff[0] != '0'); //Keeps looping until user enters "0" to exit program
	return 0; //Returns 0 if program was successful
}