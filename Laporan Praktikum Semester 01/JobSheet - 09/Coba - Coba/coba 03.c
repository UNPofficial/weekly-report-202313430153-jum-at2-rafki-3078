#include <stdio.h>

//create by 23343078_muhammad rafki

void main() {
	
	int umur = 19;
	float tinggi = 175.6;
	
	int *pointer_umur = &umur;
	int *pointer2 = &umur;
	float *p_tinggi = &tinggi;
	
	printf("alamat memori variabel 'umur' = %d\n", &umur);
	printf("alamat memori variabel 'tinggi' = %d\n", &tinggi);
	
	printf("referensi alamat memori *pointer_umur = %d\n", pointer_umur);
	printf("referensi alamat memori *pointer2 = %d\n", pointer2);
	printf("referensi alamat memori *p_tinggi = %d\n", p_tinggi);
	
	printf("alamt memori *pointer_umur = %d\n", &pointer_umur);
	printf("alamt memori *pointer2 = %d\n", &pointer2);
	printf("alamt memori *p_tinggi = %d\n", &p_tinggi);
	
}
