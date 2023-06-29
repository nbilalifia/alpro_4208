//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
#include <vector>

using namespace std;

#include <iostream>
#include <vector>

int sequentialSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> data = {5, 2, 9, 1, 7};
    int target = 9;

    int index = sequentialSearch(data, target);
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
