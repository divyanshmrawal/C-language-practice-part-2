
//QUESTION:--
//Write array in reverse order using c language

//ANSWER :--
#include <stdio.h>

int main() {
	//Creating array
	int array[5]={6,5,7,4,3};
	
	//Calculating length
   int length=sizeof(array)/sizeof(array[0]);
   
	//Creating loop in forward direction
	int forward;
	for(forward=0;forward<=5;forward++){
		printf("%d",array[forward]);
	}
	
	printf("\n");
	
	//Creating loop in reverse direction
	int reverse;
	for(reverse=length;reverse>=0;reverse--){
		printf("%d",array[reverse]);
	}
	return 0;
}