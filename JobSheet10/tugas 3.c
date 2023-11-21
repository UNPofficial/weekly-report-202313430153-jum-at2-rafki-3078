#include <stdio.h>

struct Mahasiswa {
    char nim[20];
    char nama[50];
    char tglLahir[15];
    char alamat[50];
    char hp[15];
};

// Fungsi untuk menghapus karakter newline dari string
void removeNewline(char str[], int maxSize) {
    int i;
    for (i = 0; i < maxSize && str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
}

int main() {
    struct Mahasiswa mahasiswa[100];
    int count = 0;
    char lagi;

    do {
        printf("NIM       : ");
        scanf("%s", mahasiswa[count].nim);

        printf("NAMA      : ");
        scanf(" %[^\n]", mahasiswa[count].nama);

        printf("TGL LAHIR : ");
        scanf("%s", mahasiswa[count].tglLahir);

        printf("ALAMAT    : ");
        scanf("%s", mahasiswa[count].alamat);

        printf("HP        : ");
        scanf("%s", mahasiswa[count].hp);

        count++;

        printf("\nMau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);
        
         printf("\n");
    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa :\n");
    printf("%-8s   %-20s   %-15s   %-10s   %-15s\n", "Nim", "Nama", "Tanggal Lahir", "Asal", "Nomor wa");
    printf("\n");
    
    for (int i = 0; i < count; i++) {
        printf("%-8s   %-20s   %-15s   %-10s   %-15s\n", mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].tglLahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
