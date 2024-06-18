//QUESTION:--
//Print memory address and first element of int variable using C language

//ANSWER:--
#include <stdio.h>

int main() {
//Accepting userinput
  int userinput;
  printf("Enter your number : ");
  scanf("%d",&userinput);

//Creating pointer
  int* ptr=&userinput;

//printing memory address using pointer
 printf ("Memoryaddress:%p\n",ptr);

//printing first elements using pointer
  printf ("First element value:%d",*(ptr));

 return 0;
}