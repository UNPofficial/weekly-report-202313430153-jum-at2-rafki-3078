#include <stdio.h>

void main(){
	// membuat array karakter untuk menyimpan password
	char password[30];
	
	printf("==== Program Login ====\n");
	printf("masukkan passowrd = ");
	scanf("%s", &password);
	
	//pecabangan if/else
	if( strcmp(password, "kopi") == 0){
		printf("selamat datang boss!\n");
	} else {
		printf("Password salah, coba lagi\n");
	}
	
	printf("terima kasih sudah menggunakan aplikasi ini!\n");
}