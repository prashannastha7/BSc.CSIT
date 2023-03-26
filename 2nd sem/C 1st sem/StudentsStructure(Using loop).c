#include<stdio.h>
#include<string.h>

struct Student{
	int rollno;
	char name[100];
	char address[100];
	char gender[7];
	float percentage;
};


int main(){
	struct Student std[5];
	int i;
	
	for(i=1; i<=4; i++){
		printf("Student %d details\n",i);
		
		printf("Enter roll no: ");
		scanf("%d",&std[i].rollno);
		
			printf("Enter name: ");
		scanf("%s",&std[i].name);
		
			printf("Enter address: ");
		scanf("%s",&std[i].address);
		
			printf("Enter gender: ");
		scanf("%s",&std[i].gender);
		
			printf("Enterpercentage: ");
		scanf("%f",&std[i].percentage);
		
		printf("\n\n");
	}
	for(i=0; i<=4; i++){
	printf("Student %d details\n",i+1);
	printf("%d\n", std[i].rollno);
	printf("%s\n",std[i].name);
	printf("%s\n",std[i].gender);
	printf("%f\n",std[i].percentage);
	printf("-----------------");
	}
		return 0;
}
