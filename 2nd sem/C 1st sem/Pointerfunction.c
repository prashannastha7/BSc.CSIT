#include<stdio.h>

void swap(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main(){
	int num1= 100, num2= 200;
	
	printf("Before swap");
	printf("num1= %d\n", num1);
	printf("num2= %d\n", num2);
//passing memory address as function argument 	
	swap(&num1, &num2);
	printf("After swap\n");
	printf("num1= %d\n", num1);
	printf("num2= %d", num2);
	
	return 0;
}
