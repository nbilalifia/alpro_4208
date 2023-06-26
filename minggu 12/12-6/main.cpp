//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
using namespace std;

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Badai
};

int main() {
    Cuaca hariIni = Hujan;

    switch (hariIni) {
        case Cerah:
            cout << "Cuaca hari ini: Cerah" << endl;
            break;
        case Mendung:
            cout << "Cuaca hari ini: Mendung" << endl;
            break;
        case Hujan:
            cout << "Cuaca hari ini: Hujan" << endl;
              break;
        case Badai:
            cout << "Cuaca hari ini: Badai" << endl;
            break;
    }

    return 0;
}
