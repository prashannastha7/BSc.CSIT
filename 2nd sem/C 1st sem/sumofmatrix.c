#include<stdio.h>
int main(){
	int matrix1[2][2], matrix2[2][2], sum[2][2],i, j;
	//Reading first matrix
	printf("Enter 4 numbers of first matrix:  ");
	for(i=0; i<=1; i++){
		for (j=0;j<=1; j++){
			scanf("%d",&matrix1[i][j]);
		}
		
	}
//Reading second matrix 	
	printf("Enter 4 numbers of second matrix:  ");
	for(i=0; i<=1; i++){
		for (j=0;j<=1; j++){
			scanf("%d",&matrix2[i][j]);
		}
		
	}
//Calculation sum of two matrices
	for(i=0; i<=1; i++){
		for (j=0;j<=1; j++){
			sum[i][j] = matrix1[i][j]+matrix2[i][j];
		}
		
	}	
	
	printf("First matrix is ::: \n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++){
			printf("%d\t",matrix1[i][j]);
		}
		print("\n");
	}
	
	printf("Second matrix is :::  \n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++){
			printf("%d\t",matrix2[i][j]);
		}
		print("\n");
	}
	printf("Sum matrix is ::  \n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++){
			printf("%d\t",sum[i][j]);
		}
		print("\n");
	}
	return 0;
	
}
