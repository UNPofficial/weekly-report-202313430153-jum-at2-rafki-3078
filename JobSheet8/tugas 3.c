#include <stdio.h>

// Fungsi untuk menghitung luas lingkaran
double luas(double radius) {
    return 3.14 * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double radius) {
    return 2 * 3.14 * radius;
}

int main() {
    double radius;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%lf", &radius);

    if (radius >= 0) {
        double luasLingkaran = luas(radius);
        double kelilingLingkaran = keliling(radius);

        printf("Luas lingkaran: %.2lf\n", luasLingkaran);
        printf("Keliling lingkaran: %.2lf\n", kelilingLingkaran);
    } else {
        printf("Masukkan jari-jari yang valid (bilangan non-negatif).\n");
    }

    return 0;
}
