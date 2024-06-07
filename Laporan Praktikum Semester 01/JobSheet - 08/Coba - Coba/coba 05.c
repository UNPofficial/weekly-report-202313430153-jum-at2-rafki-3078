#include <stdio.h>

// Created by 23343078_Muhammad Rafki

float bagi(int a, int b){
	float hasil = (float)a / (float)b;
	return hasil;
}

void main(){
	printf("hasil 5/2 : %.2f\n", bagi(5,2));
}