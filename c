#include <stdio.h>

int main() {
    int pilihan;
    float a, b, luas;

    printf("Pilih Bangun Datar:\n1. Segitiga\n2. Persegi Panjang\n");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("Alas: "); scanf("%f", &a);
        printf("Tinggi: "); scanf("%f", &b);
        luas = 0.5 * a * b;
        printf("Luas Segitiga: %.2f\n", luas);
    } else if (pilihan == 2) {
        printf("Panjang: "); scanf("%f", &a);
        printf("Lebar: "); scanf("%f", &b);
        luas = a * b;
        printf("Luas Persegi Panjang: %.2f\n", luas);
    } else {
        printf("Pilihan salah!");
    }
    return 0;
}
