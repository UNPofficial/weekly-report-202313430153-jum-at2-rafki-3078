#include <stdio.h>

// Created by 23343078_Muhammad Rafki

int main() {
    printf("Deret Bilangan Genap:\n");
    for (int i = 0; i <= 51; i += 2) {
        printf("%d ", i);
    }
    
    printf("\nDeret Bilangan Ganjil:\n");
    for (int i = 1; i <= 51; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}