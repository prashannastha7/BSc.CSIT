#include<stdio.h>

void toh(int disks, char from, char intermediate, char to)
{  if(disks==1){
	printf("Disk 1 moved from rod %c to %c\n", from,to);
	return;
   }
   toh(disks-1,from,intermediate, to);
   printf("Disk %d from rod %c to %c\n",disks, from, to);
   toh(disks-1,intermediate,to, from);
	}


int main(){
	int disks = 3;
	
	toh(disks, 'A','B','C' ); //towerofhanoi
	
	
	
	return 0;
}
