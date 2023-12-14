#include <stdio.h>

// Created by 23343078_Muhammad Rafki

// Fungsi untuk penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float kurang(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float kali(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Tidak dapat membagi oleh nol.\n");
        return 0.0; // Nilai default jika pembagian oleh nol
    }
}

int main() {
    float angka1, angka2;
    char operator;

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &angka1);

    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Masukkan bilangan kedua: ");
    scanf("%f", &angka2);

    float hasil;

    switch (operator) {
        case '+':
            hasil = tambah(angka1, angka2);
            break;
        case '-':
            hasil = kurang(angka1, angka2);
            break;
        case '*':
            hasil = kali(angka1, angka2);
            break;
        case '/':
            hasil = bagi(angka1, angka2);
            break;
        default:
            printf("Operator tidak valid.\n");
            return 1; // Keluar dengan kode kesalahan
    }

    printf("Hasil: %.2f\n", hasil);

    return 0;
}
