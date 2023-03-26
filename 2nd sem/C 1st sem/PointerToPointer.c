//pointer to pointer (double pointer)

#include<stdio.h>

int main(){
	int var;
	int*ptr;
	int**pptr;
	
	var = 8;
	
	//assigning address of var to ptr
	ptr = &var;
	//assiging address to firs pointer to second pointer (pointer to pointer)
	pptr = &ptr;
	
	printf("Value of var is %d\n",var);
	printf("Value of *ptr is %d\n",*ptr);
	printf("Value of **ptr is %d",**pptr);
	
	return 0;
}
