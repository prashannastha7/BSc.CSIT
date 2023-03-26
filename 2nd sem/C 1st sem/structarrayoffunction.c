//passing structure to a function as parameter

#include<stdio.h>

struct student{
	int rollno;
	char name[50];
};

void display(struct student s[]){
	int i;
	printf("Student detail are:  \n");
	for(i=0; i<=1; i++){
		printf("Roll no is:  %d\n",s[i].rollno);
		puts(s[i].name);
		printf("\n");
		
		printf("Name is:  %s\n",s[i].name);
		puts(s[i].name);
	}
}

int main(){
    struct student std[2];
    int i;
    
    for(i=0;i<=1;i++){
    	printf("Enter %d student details:  \n", i+1);
    printf("Enter roll number:  ");
    scanf("%d", &std[i].rollno);
    
    printf("\nEnter name:  ");
    scanf("%s",std[i].name);
 
	}
    

    
    display(std);

return 0;
}
