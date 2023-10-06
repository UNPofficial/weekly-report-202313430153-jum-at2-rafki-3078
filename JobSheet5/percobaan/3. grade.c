#include <stdio.h>

void main(){
	int nilai;
	char grade; 
	
	printf("=== program grade nilai ===\n");
	printf("inputkkan nilai : ");
	scanf("%i", &nilai);
	
	//menggunakan percabangan if/else/if
	if (nilai >= 90 ){
		grade = 'A';
	} else if (nilai >= 80) {
		grade = 'B';
	} else if (nilai >= 70) {
		grade = 'B';
	} else if (nilai >= 60) {
		grade = 'C';
	} else if (nilai >= 50) {
		grade = 'C';
	} else if (nilai >= 40) {
		grade = 'D';
	} else if (nilai >= 30) {
		grade = 'E';
	}
	
	printf("Nilai : %i\n", nilai);
	printf("Grade kamu : %c\n", grade);
	
}