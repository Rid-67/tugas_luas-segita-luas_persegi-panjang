#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double p1, p2, luas;

    cout << "1. Luas Segitiga\n2. Luas Persegi Panjang\nPilih: ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Alas: "; cin >> p1;
            cout << "Tinggi: "; cin >> p2;
            luas = 0.5 * p1 * p2;
            cout << "Hasil: " << luas << endl;
            break;
        case 2:
            cout << "Panjang: "; cin >> p1;
            cout << "Lebar: "; cin >> p2;
            luas = p1 * p2;
            cout << "Hasil: " << luas << endl;
            break;
        default:
            cout << "Pilihan tidak ada.";
    }
    return 0;
}
