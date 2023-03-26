#include<stdio.h>
 int checkprime(int num){
 	int i,c;
	i=1;
	c=0;
	
	while (i <= num){
		if (num%i==0){
			c=c+1;
			i=i+1;
		}
		else {
			i=i+1;
		}
	}	
	if (c==2){
		printf("number is prime");
	}
	else {
		printf("number is not prime");
	}
 }
 
 int main(){
 	int num;
 	printf("Enter a number: ");
	scanf("%d",&num);
	
	checkprime(num);
 }
