//QUESTION:--
//Write a C program to check leap year.

//ANSWER:--
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		//Accepting user input ......
	int userinput;
	printf("Enter your current year : ");
	scanf("%d",&userinput);
	
	//calculation & printing answer......
	if (userinput%4==0){
		printf("Your year is leap year.");
	}
	else{
		printf("Your year is not a leap year.");
	}
	return 0;
}