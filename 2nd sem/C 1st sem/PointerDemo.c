//Pointer stored memory address

#include<stdio.h>

int main(){
	int num = 100, *ptr=&num;
	printf("Address is %d\n",ptr);
	num = 200;
	printf("Value is %d",*ptr); //value nikalna * use garney
	//pointer variable declaration
	/* int* ptr; or int * ptr; or  int *ptr; */
//	int* ptr1, ptr2, ptr3;
//	float* ptr4;
//	double* ptr5;
//	char* ptr6;
	
	
	
	return 0;
}
