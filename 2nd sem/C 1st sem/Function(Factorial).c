#include<stdio.h>

int number=1;

int factorial(int num){
	if (num==1){
		return 1;
	}else{
		return num*factorial(num-1);
	}
}

int main(){
	int n;
	n=factorial(5);
	printf("factorial is: %d \n",n);
	printf("%d",number);
	return 0;
}
