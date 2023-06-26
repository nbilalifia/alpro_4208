//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
#define PI 3.14159265358979323846

using namespace std;

struct BangunDatar {
    double panjang;
    double lebar;
};

struct Lingkaran {
    double radius;
};

struct Kerucut {
    double radius;
    double tinggi;
};

struct Bola {
    double radius;
};

double hitungLuasPersegiPanjang(BangunDatar persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

double hitungLuasLingkaran(Lingkaran lingkaran) {
    return PI * lingkaran.radius * lingkaran.radius;
}

double hitungVolumeKerucut(Kerucut kerucut) {
    return (1.0 / 3.0) * PI * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

double hitungVolumeBola(Bola bola) {
    return (4.0 / 3.0) * PI * bola.radius * bola.radius * bola.radius;
}

int main() {
    BangunDatar persegiPanjang;
    persegiPanjang.panjang = 4.0;
    persegiPanjang.lebar = 5.0;
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;

    Lingkaran lingkaran;
    lingkaran.radius = 3.0;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;

    Kerucut kerucut;
    kerucut.radius = 2.0;
    kerucut.tinggi = 6.0;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;

    Bola bola;
    bola.radius = 4.0;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;


    return 0;
}
