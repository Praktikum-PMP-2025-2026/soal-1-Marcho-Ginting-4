/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - Overview of C Language
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Yozia Gedalya Marcho Ginting (13224001)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program berfungsi sebagai pemberi akses terhadap parameter tertentu.
 * 
 */

 /************* LIBRARIES **************/
 #include <stdio.h>
 #include <string.h>

 void solve() {
    // Local variables
    int izin, suhu, radiasi, jam;

    // Read input from user
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    // Tree of conditional statments
    if (radiasi >= 6) {
        printf("TOLAK\n");
    } else if (suhu >= 390) {
        printf("KARANTINA\n");
    } else if (izin == 1 && (jam < 6 || jam > 20)) {
        printf("TOLAK\n");
    } else if (izin == 1) {
        printf("MASUK\n");
    } else if (izin == 2 && radiasi <= 2 && (jam >= 8 && jam <= 18)) {
        printf("MASUK\n");
    } else if (izin == 2) {
        printf("PEMERIKSAAN\n");
    } else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("MASUK\n");
    } else {
        printf("TOLAK\n");
    }
 }
 int main() {
    solve();
    return 0;
}
