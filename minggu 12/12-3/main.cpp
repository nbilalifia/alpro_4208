//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
using namespace std;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double radius;
} Lingkaran;

typedef struct {
    double radius;
    double tinggi;
} Kerucut;

typedef struct {
    double radius;
} Bola;

double hitungLuasPersegiPanjang(PersegiPanjang pp) {
    return pp.panjang * pp.lebar;
}

double hitungLuasLingkaran(Lingkaran lingkaran) {
    return 22.0 / 7.0 * lingkaran.radius * lingkaran.radius;
}

double hitungVolumeKerucut(Kerucut kerucut) {
    return 1.0 / 3.0 * 22.0 / 7.0 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

double hitungVolumeBola(Bola bola) {
    return 4.0 / 3.0 * 22.0 / 7.0 * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang pp;
    pp.panjang = 5.0;
    pp.lebar = 3.0;

    Lingkaran lingkaran;
    lingkaran.radius = 7.0;

    Kerucut kerucut;
    kerucut.radius = 4.0;
    kerucut.tinggi = 6.0;

    Bola bola;
    bola.radius = 3.0;

    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(pp) << endl;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
