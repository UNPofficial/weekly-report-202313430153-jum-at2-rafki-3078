#include <stdio.h>

int main() {
    // Assign nilai Lesley
    int Lesley = 57082;

    // Assign alamat Lesley ke Layla
    int *Layla = &Lesley;

    // Assign nilai yang ada di alamat Layla + 1 ke Balmond
    int Balmond = *Layla + 1;

    // Menampilkan nilai Layla
    printf("a) Nilai Layla: %d\n", *Layla);

    // Menampilkan nilai Balmond
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}
