//IMP

#include<stdio.h>


int main(){
//	int i, arr[3], sum=0;
//	-----without pointer-------
//	printf("Enter three interger numbers: ");
//	for (i=0;i<=2;i++){
//      scanf("%d", &arr[i]);
//	  sum+=arr[i];	
//	}
//	printf("\nTotal sum is %d",sum);


int i, arr[3], sum=0;
	printf("Enter three interger numbers: ");
//with pointer
	for (i=0;i<=2;i++){
		
      scanf("%d",arr+1);
	  sum+=*(arr+i);	
	}
	printf("\nTotal sum is %d",sum); 
	
	return 0;
}
