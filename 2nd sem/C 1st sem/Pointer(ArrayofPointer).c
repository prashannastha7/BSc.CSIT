#include<stdio.h>

int main(){
	int values[5]={100,200,300};
	int i, *ptr[5];
	
	for(i=0;i<=2;i++){
		ptr[i] = &values[i];
		printf("Values of values[%d] is %d\n",i, *ptr[i]);
	}
	
	return 0;
}
