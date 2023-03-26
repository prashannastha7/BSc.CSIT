#include<stdio.h>
int main(){
	float marks[5], sum, percentage;
	
	printf("Enter marks subject1:  ");
	scanf("%f",&marks[0]);
	printf("Enter marks subject2:  ");
	scanf("%f",&marks[1]);
	printf("Enter marks subject3:  ");
	scanf("%f",&marks[2]);
	printf("Enter marks subjects:  ");
	scanf("%f",&marks[3]);
	printf("Enter marks subjects:  ");
	scanf("%f",&marks[4]);
	
	sum = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
	percentage = sum/5;
	printf("percentage is %f\n",percentage);
	if(percentage>=80){
		printf("Distinction");	
	}else if(percentage>=60){
		printf("First Division");
	}else if(percentage>=50){
		printf("Second Division");	
	}else if(percentage>=40){
		printf("Passed");
	}else{
		printf("Fail");	
	}
	
	
	
	return 0;
	}
	
	
	
	
	

