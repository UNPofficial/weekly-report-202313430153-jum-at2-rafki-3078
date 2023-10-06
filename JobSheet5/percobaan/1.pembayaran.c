#include <stdio.h>

void main(){
	printf("== Program Pembayaran ==\n");
	int total_belanja = 0;
	
	printf("inputkan total belanja: ");
	scanf("%i", &total_belanja);
	
	// menggunakan blok percabangan if
	if( total_belanja > 100000 ){
		printf("Selamat, anda mendapatkan hadiah!\n");
	}
	
	printf("terima kasih sudah berbelanja ditoko kami\n\n");
}