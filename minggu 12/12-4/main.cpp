//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

//Array Statis
int main() {
    const int jumlahMahasiswa = 4;
    Mahasiswa mahasiswa[jumlahMahasiswa] = {
        {202001234, "Andi", "Broadcasting", 2023},
        {201001234, "Budi", "Sistem Informasi", 2013},
        {200001234, "Ali", "DKV", 2003},
        {199001234, "Siti", "Kesehatan", 1993},
    };

    cout << "NIM            |    NAMA     |     JURUSAN      |   TAHUN LULUS" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << mahasiswa[i].nim << "      | " << setw(6) << mahasiswa[i].nama << "      | "
             << setw(12) << mahasiswa[i].jurusan << "     |       " << mahasiswa[i].tahunLulus << endl;
    }

    return 0;
}




