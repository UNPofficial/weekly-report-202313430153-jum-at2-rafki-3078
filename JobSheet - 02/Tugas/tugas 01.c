#include <stdio.h>

// Created by 23343078_Muhammad Rafki

int main() {
    char nama[20]; 

    printf("Hai, Nama Kamu siapa? ");
    scanf("%19[^\n]", nama); 

    printf("Selamat Datang %s Dalam Pemrograman C!\n", nama);

    return 0;
}
