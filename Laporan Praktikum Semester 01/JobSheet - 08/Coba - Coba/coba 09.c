#include <stdio.h>

// Created by 23343078_Muhammad Rafki

void kali_dua(int *num) {
	
	*num = *num *2;
	
}

void main(){
	
	int angka = 9;
	
	kali_dua(&angka);
	
	printf("isi variabel angka = %d\n", angka);
	
}