#include <stdio.h>
#include <stdlib.h>

//create by 23343078_muhammad rafki

void main(){
	char buff[255];
	FILE *fptr;
	
	if((fptr = fopen("puisi.txt","r")) == NULL){
		printf("error : file tidak ada !");
		
		exit(1);
	}
	
	fgets(buff, 255, fptr);
	
	printf("%s", buff);
	
	fclose(fptr);
	
}