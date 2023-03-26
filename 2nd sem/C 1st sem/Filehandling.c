/*
IMP FOR EXAMS
File handling
Creating a new file
Opening an existing file
reading data form existing file
Writing data to afile
closing the file

r  ->  opens a text file in read mode
w  ->  opens a text file in write mode
a  ->  append 
r+ ->  read and write mode
w+ -> read and write mode
a+ -> read and appends mode
rb -> opens a binary file in read mode
wb -> opens a binary file in write mode
ab ->  opens a binary file in append mode
rb+->  opens a binary file in read and write mode
wb+ ->  opens a binary file in read and write mode
ab+  -> opens a binary file in read and append mode
*/

#include<stdio.h>
// file is created
//int main(){
//	FILE* file;
//	file = fopen("E:\\MyGames\\abc.txt","w");
//	if(file!= NULL){
//		printf("File created");
//	} else{
//		printf("File is not created");
//	}
//	fclose(file);
//	return 0;
	
//}
/* file is w r a etc
int main(){
	FILE* file;
	char name[20];
	file = fopen("E:\\MyGames\\abc.txt","w");// w is mode mathi lekhako wala
	if(file!= NULL){
		printf("File created \n");
		
		printf("Enter your name:  ");
		gets(name);
		fprintf(file, "%s",name);
	} else{
		printf("File is not created");
	}
	fclose(file);
	return 0;
	
}
*/
/* reading existing file
int main(){
	FILE* file;
	char character;
	//opening a file
	file = fopen("E:\\MyGames\\wiki.txt","r");
	if(file == NULL){
		printf("File does not exist");
	}else {
		printf("File exists\n");
		//reading character from file
		while((character = fgetc (file)) !=EOF){
			putchar(character);
		}
	}
	//closing a file
	fclose(file);
	return 0;
}
*/
//Coping File content(Wild IMP)

/*int main(){
	FILE* file;
	FILE* destinationFile;
	char character;
	//opening a file
	file = fopen("E:\\MyGames\\wiki.txt","r");
	destinationFile= fopen("E:\\MyGames\\copy.txt","w");
	if(file == NULL){
		printf("File does not exist");
	}else {
		printf("File exists and copying the content\n");
		//reading character from file
		while((character = fgetc (file)) !=EOF){          //fgetc le file bata ek ek ota read gardaii character vanney varibale ma rakhcha
			fprintf(destinationFile,"%c",character);
		}
	}
	//closing a file
	fclose(file);
	return 0;
}*/

/* 
//Error handling in c program : ferror perror clearerr
int main(){
	FILE* file;
	file = fopen("E:\\MyGames\\copy.txt","r");
	if(file == NULL){
	    //perror("Error is ");    uses to see what is error
		printf("File does not exist");
	}else {
		fprintf(file, "%s","text message");
	}
	if(ferror(file)){               // ferror is used to see if there is any error in file
		printf("Error while writing in file\n");
		perror("Error is  ");    //perror ma string chahincha perror is uses to write what is error
	}
	//clearing the error message from file stream
	clearerr(file);   //used to clear error after finishing to see all error
	fclose(file);
	return 0;
}
*/


