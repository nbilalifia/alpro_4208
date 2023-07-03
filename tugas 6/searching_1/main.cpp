//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>

using namespace std;

int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data[] = {5, 2, 9, 1, 7};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 9;

    int index = sequentialSearch(data, size, target);
    if (index != -1) {
        cout << "Target ditemukan pada indeks: " << index << endl;
    } else {
        cout << "Target tidak ditemukan." << endl;
    }

    return 0;
}


//Kompleksitas Waktu: O(n) - Terbaik: O(1) (jika target ada di indeks pertama)
//- Terburuk: O(n) (jika target ada di indeks terakhir atau tidak ada)
//Kompleksitas Ruang: O(1)
