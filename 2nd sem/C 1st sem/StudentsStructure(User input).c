#include<stdio.h>
#include<string.h>

struct Student{
	int sid;
	char name[50];
	char address[50];
	char gender;
	float percentage;
};

int main(){
	
	struct Student student1, student2, student3;
	
	printf("Enter your roll no: ");
	scanf("%d",&student1.sid);
	
		printf("Enter your percentage: ");
	scanf("%f",&student1.percentage);
	
		printf("Enter your name: ");
	    scanf("%s",&student1.name);
	
		printf("Enter your address: ");
	    scanf("%s",&student1.address);
	
		printf("Enter your gender: ");
	scanf("%f",&student1.gender);
	
	
	
	return 0;
}
	
	
	
	
	
	
