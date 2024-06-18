//QUESTION:--
//Write number from 1 to 11 using do-while loop in C language.

//ANSWER:--
#include <stdio.h>

int main() {
//Creating int vareable.
  int i=1;

//Applying do-while loop on i
  do{
  
  printf ("%d\n",i);
  i++;
  }
  while (i<=11);

  return 0;
}