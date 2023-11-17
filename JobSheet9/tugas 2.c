#include <stdio.h>

int main() {
    char kalimat[100];
    int panjang = 0;

    printf("Masukkan kalimat: ");
    gets(kalimat);

    while (kalimat[panjang] != '\0') {
        panjang++;
    }

    printf("Kebalikannya: ");
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    return 0;
}
