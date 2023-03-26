// display prime numbers between intervals using function

#include<stdio.h>
int displayprime(int n,int b){
	int i,c;
	
	
	while (n<=b){		
		c=0;i=1;
		while(i<=n){
			if (n%i==0){
				c++;
				i++;
			}
			else{
				i++;
			}
		}
		if (c==2){
			printf("%d\n",n);
			n++;
		
		}
		else{
			n++;
		}	
	

		}		
	}

 

int main(){
	int num1,num2;
	printf("enter two numbers:");
	scanf("%d %d",&num1,&num2);
	displayprime(num1,num2);
	return 0;
}
