#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    char playAgain;

    // Inisialisasi seed untuk random number generator
    srand(time(NULL));

    do {
        // Menghasilkan nomor acak antara 1 dan 20
        secretNumber = rand() % 20 + 1;

        printf("Selamat datang di permainan tebak nomor!\n");

        do {
            printf("Masukkan tebakan Anda (antara 1 dan 20): ");
            scanf("%d", &guess);

            // Mengecek tebakan
            if (guess < secretNumber) {
                printf("Nomor saya lebih besar!\n");
            } else if (guess > secretNumber) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
            }

            attempts++;

        } while (guess != secretNumber);

        printf("Anda berhasil menebak dengan %d percobaan.\n", attempts);

        // Meminta input untuk bermain lagi atau tidak
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain);

        // Mengulang permainan jika pengguna memilih untuk bermain lagi
        if (playAgain == 'y' || playAgain == 'Y') {
            attempts = 0;
        }

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}
