#include<stdio.h>



//para
void add(int num1, int num2){
	printf("sum is %d",num1+num2);
	
}
int multiply(int num1, int num2){
	int product = num1 * num2;
	return product;
}

float multiply2(float num1, float num2){
	float product = num1 * num2;
	return product;
}

int sum(){
	int a=6, b=7;
	return a+b;
	
}



int main(){
	int result = sum();
	printf("%d",result);
	
	
	
//	float result =  multiply2(6,7);
//	printf("%.2f",result);
//	int result =  multiply(6,7);
//	printf("%d",result);
//	add(5, 9);
	return 0;
}
