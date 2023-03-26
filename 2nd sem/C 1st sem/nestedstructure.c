#include<stdio.h>

struct dateofbirth{
	int year;
	int month;
	int day;
};

struct student{
	char name[20];
	int rollno;
	struct dateofbirth dob;
};

int main(){
	struct student std;
	
	printf("Enter student detail:  \n");
	printf("Enter name:  ");
	scanf("%s",&std.name);
	printf("Enter rollno:  ");
	scanf("%s",&std.rollno);
	printf("Enter birth year:  ");
	scanf("%d",&std.dob.year);
	printf("Enter birth month:  ");
	scanf("%s",&std.dob.month);
	printf("Enter birth day:  ");
	scanf("%d",&std.dob.day);
	
	printf("Student detail is:  ");
	printf("%s%s%d%s%d", std.rollno, std.name, std.dob.year, std.dob.month, std.dob.day);
	
	return 0;
	
	
}
