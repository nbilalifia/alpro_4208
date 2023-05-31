#include <iostream>

using namespace std;

int penjumlahan(int a, int b) {
    if (b == 0)
        return a;
    else
        return penjumlahan(a + 1, b - 1);
}

int pengurangan(int a, int b) {
    if (b == 0)
        return a;
    else
        return pengurangan(a - 1, b - 1);
}

int pembagian(int a, int b) {
    if (a < b)
        return 0;
    else
        return 1 + pembagian(a - b, b);
}

int perkalian(int a, int b) {
    if (b == 0 || a == 0)
        return 0;
    else
        return a + perkalian(a, b - 1);
}

int pangkat(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * pangkat(a, b - 1);
}

int main() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;

    cout << "Hasil penjumlahan: " << penjumlahan(a, b) << endl;
    cout << "Hasil pengurangan: " << pengurangan(a, b) << endl;
    cout << "Hasil pembagian: " << pembagian(a, b) << endl;
    cout << "Hasil perkalian: " << perkalian(a, b) << endl;
    cout << "Hasil pangkat: " << pangkat(a, b) << endl;

    return 0;
}
