#include<stdio.h>
#include<string.h>

//Student structure
struct Student{
	int sid;
	char name[50];
	char address[50];
	char gender;
	float percentage;
};

int main(){
	struct Student student1, student2, student3;
	
	student1.sid = 100;
	strcpy(student1.name, "Prashanna Shrestha") ;
	strcpy(student1.address,"Lalitpur");
	student1.gender = 'M';
	student1.percentage = 85.5;
	
	student2.sid = 300;
	strcpy(student2.name, "Suyash Shrestha") ;
	strcpy(student2.address,"Gorkha");
	student2.gender = 'M';
	student2.percentage = 87.6;
	
	
	printf("Student id= %d\n",student1.sid);
	printf("%s\n",student1.name);
	printf("%s\n",student1.address);
	printf("%c\n",student1.gender);
	printf("%f\n",student1.percentage);
	
	
	printf("%d\n",student2.sid);
	printf("%s\n",student2.name);
	printf("%s\n",student2.address);
	printf("%c\n",student2.gender);
	printf("%f\n",student2.percentage);
	
	return 0;
}
