#include <stdio.h>

//create by 23343078_muhammad rafki

void main(){
	
	printf("== program pembayaran ==\n");
	int total_belanja = 0;
	
	printf("inputkan total belanja : ");
	scanf("%i", &total_belanja);
	
	if( total_belanja > 100000 ){
		printf("selamat, anda mendapatkan hadiah!\n");
	}
	
	printf("terima kasih sudah berbelanja ditoko kami\n\n");
	
}