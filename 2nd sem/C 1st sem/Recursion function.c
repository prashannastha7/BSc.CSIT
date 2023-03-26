// sum of natural number



#include<stdio.h>

int sum(int n){
	if(n==0){         //n=3  3+sum(2) 3+2+sum(1) 3+2+1+sum(0)  3+2+1+0
		return 0;
	}
	else {
	return n+sum(n-1);
	}
}




int main(){
	int number;
	printf("Enter a positive interger: ");
	scanf("%d",&number);
	printf("Total sum is %d",sum(number));
	
	
}
