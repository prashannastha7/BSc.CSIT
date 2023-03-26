//passing structure to a function as parameter

#include<stdio.h>

struct student{
	int rollno;
	char name[50];
};

void display(struct student s){
	printf("User detail is:  \n");
	puts(s.name);
	printf("%d",s.rollno);
}

int main(){
    struct student s1;
    
    printf("Enter student details:  \n");
    printf("Enter roll number:  ");
    scanf("%d", &s1.rollno);

    printf("\nEnter name:  ");
    scanf("%s",s1.name);
 
    display(s1);

return 0;
}
