
#include<string.h>
#include<stdio.h>
struct Student{
	int sid;
	char name[50];
	char address[50];
	char gender;
	float percentage;
};

int main()
{

struct Student student1, student2, student3, student4, student5 ;

int i;

for (i=0; i<5 ; i++ ){
    
printf("\n\nEnter your student id: ");
scanf("%d",&student2.sid);

printf("Enter your name: ");
scanf("%s",&student2.name);

printf("Enter your address: ");
scanf("%s",&student2.address);

printf("Enter your gender: ");
scanf("%s",&student2.gender);

printf("Enter your percentage: ");
scanf("%f",&student2.percentage);


printf("\n\nStudent ID: %d\n",student2.sid);
printf("Name: %s\n",student2.name);
printf("Address: %s\n",student2.address);
printf("Gender: %s\n",student2.gender);
printf("Percentage: %.2f\n",student2.percentage);
}
    
    return 0;
}
