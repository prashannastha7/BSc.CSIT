#include<stdio.h>
int main(){
	FILE* file;
	file = fopen("E:\\randomwrite.txt","w");
	if(file == NULL){
		printf("FIle not created");		
	}else{
		printf("File created.\n");
		fprintf(file,"%s","Hello prime college");
		fseek(file,12, 0);
		fprintf(file, "%s","students");
	}
	fclose(file);
	return 0;
}
    
