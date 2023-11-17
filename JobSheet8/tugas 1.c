#include <stdio.h>

void tampilkan_rincian_perkalian(int angka1, int angka2) {
    if (angka2 == 1) {
        printf("%d", angka1);
    } else {
        tampilkan_rincian_perkalian(angka1, angka2 - 1);
        printf(" + %d", angka1);
    }
}

int perkalian_rekursif(int angka1, int angka2) {
    // Basis dari rekursi: Jika salah satu angka adalah 0, hasilnya adalah 0.
    if (angka1 == 0 || angka2 == 0) {
        return 0;
    }

    // Menampilkan rincian perkalian
    printf("%d x %d = ", angka1, angka2);
    tampilkan_rincian_perkalian(angka1, angka2);
    printf("\n");

    // Hasil perkalian sebenarnya
    return angka1 + perkalian_rekursif(angka1, angka2 - 1);
}

int main() {
    int angka1, angka2;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    int hasil_perkalian = perkalian_rekursif(angka1, angka2);
    printf("Hasil perkalian %d x %d adalah %d\n", angka1, angka2, hasil_perkalian);

    return 0;
}
