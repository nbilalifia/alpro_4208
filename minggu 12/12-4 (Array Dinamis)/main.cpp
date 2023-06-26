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

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa* mahasiswa = new
    Mahasiswa[jumlahMahasiswa];

    cout << "Masukkan data mahasiswa: " << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mahasiswa[i].nama);
        cout << "Jurusan: ";
        getline(cin, mahasiswa[i].jurusan);
        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].tahunLulus;
        cout << endl;
    }

    cout << "NIM    |    NAMA     |     JURUSAN     | TAHUN LULUS" << endl;
      for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << mahasiswa[i].nim << "    |    " << setw(10) << mahasiswa[i].nama << "      |    "
             << setw(12) << mahasiswa[i].jurusan << "   |   " << mahasiswa[i].tahunLulus << endl;
    }

    delete[] mahasiswa;

    return 0;
}

//Analisa
//Penggunaan array of structure dapat memudahkan penyimpanan dan pengelolaan data yang terkait.
//Dalam contoh tersebut, array of structure digunakan untuk menyimpan data mahasiswa dengan NIM, Nama, Jurusan, dan TahunLulus.
//Dengan menggunakan array of structure, data mahasiswa dapat diatur secara terstruktur dalam satu variabel.
//Selain itu, dapat memudahkan dalam operasi-operasi seperti input, output, pengolahan, dan penyimpanan data terkait.
