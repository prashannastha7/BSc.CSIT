/*
& -> 1 if both operands are 1, otherwise 0
| - > 0 if both opearnds are 0, otherwise 1

left shift operator (<<)
num = 15; Binary eqv. 1111 (4321)
num << 1
11110 => decimal value = 30 (54321)

num<<2
111100 => decimal value = 60

Right shift opearnd (>>)
num = 15; binary eqv. 1111
num >> 1
0111 => decimal value = 7
num >> 2
0011 => decimal value = 3 (aagadi kati 0 thapyoo pasadi 1 delete garney)
num >> 3
0001 => decimal value = 1
*/

#include<stdio.h>
int main(){
	int num=15;
printf("Left shift opeartors:  \n");
printf("%d\n",num<<1);
printf("%d\n",num<<2);
printf("Right shift opeartors:  \n");
printf("%d\n", num>>1);
printf("%d\n", num>>2);
printf("%d\n", num>>3);

return 0;
}
