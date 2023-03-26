// Reading text from random lines(random location access)
// random file access in C:
// 3 different inbuilt C function for random file access
// 1. fseek(file pointer, no of bytes to skip, position of file pointer)
// position of file pointer: 0 -> beginning of file
//                           1 -> current file pointer poistion
//                           2-> end of file
// 
// 2. ftell(file) :it returns the location/position of file pointer
// 3. rewind(file) : it sets pointer position to beginning of file



#include<stdio.h>
 //suru ma create a file
//int main(){
//FILE* file;
//file = fopen("E:\\randomaccess.txt","w");
//if(file == NULL){
//	printf("File not created.");
//}else{
//	fprintf(file,"%s","This is a random text in C programming class.");	
//	}
//	
//	}
//	fclose(file);	
//	return 0;
//}

// then Random location access suru
//int main(){
//FILE* file;
//char ch;
//file = fopen("D:\\randomaccess.txt","r");
//if(file == NULL){
//	printf("File not created.");
//}else{
//	while((ch = fgetc(file)) != EOF){
//		putchar(ch);
//	}
//}
//
// fclose(file);
//	return 0;
//	}

// both should be used in same code
int main(){
FILE* file;
char ch;
int n;         //user laii sodnako lagii memory banako
file = fopen("E:\\randomaccess.txt","r");
if(file == NULL){
	printf("File not created.");
}else{
	/*printf("Enter no of character to skip:  ");   //user lai sodhna
	scanf("%d",&n);*/                               //user laii sodhna
	//fseek(file, n, 0); //user laii nasodhneyy aafarr garneyy vaya n ko thau ma number rakhney
	// fseek(file, -5, 2); //2 means last bata -means last bata count 
	 fseek(file, 5, 0);
	 printf("Current file pointer location is %d\n", ftell(file));
	 rewind(file);
	 printf("Current file pointer location is %d\n", ftell(file));
	//fprintf(file,"%s","This is a random text in C programming class.");	
	while((ch = fgetc(file)) != EOF){
		putchar(ch);
	}
	
	}
	fclose(file);	
	return 0;
}











