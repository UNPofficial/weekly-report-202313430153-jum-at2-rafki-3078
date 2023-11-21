#include <stdio.h>

// Struktur untuk menyimpan informasi zodiak
struct Zodiac {
    int start_day;
    int start_month;
    char name[12];
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
const char* determineZodiac(int day, int month, const struct Zodiac zodiacs[], int numZodiacs) {
    for (int i = 0; i < numZodiacs; ++i) {
        if ((month == zodiacs[i].start_month && day >= zodiacs[i].start_day) ||
            (month == zodiacs[(i + 1) % numZodiacs].start_month && day < zodiacs[(i + 1) % numZodiacs].start_day)) {
            return zodiacs[i].name;
        }
    }
    return "UNKNOWN"; // Jika tidak ada zodiak yang cocok
}

int main() {
    // Array dari struktur zodiak
    struct Zodiac zodiacs[] = {
        {20, 1, "AQUARIUS"},
        {19, 2, "PISCES"},
        {21, 3, "ARIES"},
        {20, 4, "TAURUS"},
        {21, 5, "GEMINI"},
        {21, 6, "CANCER"},
        {23, 7, "LEO"},
        {23, 8, "VIRGO"},
        {23, 9, "LIBRA"},
        {23, 10, "SCORPIO"},
        {22, 11, "SAGITTARIUS"},
        {22, 12, "CAPRICORN"}
    };

    int day, month, year;

    printf("Masukkan tanggal lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &day, &month, &year);

    printf("Tanggal Lahir Anda : %02d-%02d-%04d\n", day, month, year);
    printf("Zodiak Anda adalah : %s\n", determineZodiac(day, month, zodiacs, sizeof(zodiacs) / sizeof(zodiacs[0])));

    return 0;
}
