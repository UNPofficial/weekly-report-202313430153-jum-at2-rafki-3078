#include <stdio.h>

int main() {
    char string[] = "BORLAND";
    char *ptr = string;

    // Mencari akhir dari string
    while (*ptr != '\0') {
        ptr++;
    }

    // Mengubah pointer ke karakter terakhir
    ptr--;

    // Mencetak substring dari besar ke kecil
    while (ptr >= string) {
        printf("%s\n", ptr);
        ptr--;
    }

    return 0;
}
