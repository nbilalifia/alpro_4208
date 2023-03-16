/*Nabila Alifia Rizky
NIM A11.2022.14325
Kelas 4208*/

#include <iostream>
using namespace std;

int main()
{
    //nomer 3 dan 4
    //penjumlahan dan rata-rata bilangan array
  int input[100], jml_array, i, total, rata_rata;

  cout << "Input jumlah element array: ";
  cin >> jml_array;
  cout << endl;

  cout << "Input "<< jml_array << " angka (dipisah dengan enter): ";
  cout << endl;

  total = 0;
  for(i = 0; i < jml_array; i++){
    cout << "Angka ke-" << i+1 <<": ";
    cin >> input[i];
    total = total + input[i];
    rata_rata = total/jml_array;
  }

  cout << endl;

  cout << "Total penjumlahan dari "<< jml_array <<
          " angka tersebut adalah: " << total << endl;

  cout << "Jumlah Rata-rata bilangan tersebut adalah : "<< rata_rata << endl;

  return 0;
}
