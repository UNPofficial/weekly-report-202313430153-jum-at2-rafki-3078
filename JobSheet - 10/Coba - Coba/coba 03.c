#include <stdio.h>

//create by 23343078_muhammad rafki

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main(){
	enum hari sekarang;
	sekarang = RABU ;
	
	printf("ukuran variabel enum : %d bytes\n", sizeof(sekarang));
}