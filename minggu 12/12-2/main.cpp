//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};

int main() {
    Sepeda sepeda;

    sepeda.Merk = "Polygon";
    sepeda.Type = "Sepeda Gunung";
    sepeda.Tahun = 2013;
    sepeda.Harga = "2.000.000";

    cout << "Merk: " << sepeda.Merk << endl;
    cout << "Type: " << sepeda.Type << endl;
    cout << "Tahun: " << sepeda.Tahun << endl;
    cout << "Harga: " << sepeda.Harga << endl;


    return 0;
}
