#include <stdio.h>

//create by 23343078_muhammad rafki

void main(){

	int nilai[5] = {33, 22, 11, 44, 21};
	
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("banyaknya isi array nilai : %d\n", length);	
	
}