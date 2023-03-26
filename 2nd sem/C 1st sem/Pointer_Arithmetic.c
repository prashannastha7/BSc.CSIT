#include<stdio.h>

int main(){
	int arr[]= {100, 200, 300};
	int i, *ptr;
	ptr= arr; //for first array no & needed
	//ptr= &arr[2]; //for second for third .... we need &
    printf("%d",ptr);
    for(i=0;i<=2;i++){
    	
    	printf("Address of arr[%d] = %d\n",i,ptr);
    	printf("Value of arr[%d] = %d\n",i,*ptr);
    	ptr++; // need to increse natraa 100 ko matra aaucha
    	
    	
    	
    	
	}	
	
	
	return 0;
}
