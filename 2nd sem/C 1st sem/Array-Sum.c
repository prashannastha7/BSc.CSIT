#include<stdio.h>
int main(){
	int rolls[20] = {100,101,102,103,104}, i, sum = 0;
	
	for(i=0; i<5; i++){
		sum += rolls[i];
	}
	printf("Sum is %d\n",sum);
	printf("Average is %d\n",sum/5);
	
	
	
	
	return 0;
}
