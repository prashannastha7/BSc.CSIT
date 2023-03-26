#include <stdio.h>

int main(){
	int i=1,sum=0;

	while(i<=10){
		if(i%2==0){
		sum = i + sum;
	}
	i++;
	}
printf("%d\n",sum);

return 0;
}
