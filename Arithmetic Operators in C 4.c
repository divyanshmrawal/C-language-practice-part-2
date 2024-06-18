//QUESTION:--
//Basic operation with 2 values using C language. 

//ANSWER:--
#include <stdio.h>

int main() {

//first number:-
int num1;
printf("Enter your first number:");
scanf("%d",&num1);

//second number:-
int num2;
printf("Enter your second number:");
scanf("%d",&num2);

//addition:-
int add=num1+num2;
printf ("addition of two numbers:%d\n",add);

//substrates:-
int sub=num1-num2;
printf ("substraction of two numbers:%d\n",sub);

//multiplying:-
int multiply=num1*num2;
printf ("multiplying of two numbers: %d\n", multiply);

//division:-
float devide=(float)num1/num2;
printf ("division of two numbers: %d\n",devide);

return 0;
}
