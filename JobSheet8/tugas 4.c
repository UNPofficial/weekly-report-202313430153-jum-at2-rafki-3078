#include <stdio.h>

// Fungsi untuk menghitung besar potongan
double potong(double totalPembelian) {
    if (totalPembelian < 1000000) {
        return 0.0;
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        return 0.20 * totalPembelian;
    } else {
        return 0.35 * totalPembelian;
    }
}

int main() {
    double totalPembelian;

    printf("====== Program Hitung Potongan ======\n");
    printf("\nTotal Pembelian (Rp.) : ");
    scanf("%lf", &totalPembelian);

    if (totalPembelian < 0) {
        printf("Total pembelian tidak boleh negatif.\n");
    } else {
        double besarDiskon = potong(totalPembelian);
        double besarYangHarusDibayarkan = totalPembelian - besarDiskon;

        printf("Besar Diskon : %.2lf\n", besarDiskon);
        printf("Besar Yang Harus Dibayarkan : %.2lf\n", besarYangHarusDibayarkan);
    }

    return 0;
}
