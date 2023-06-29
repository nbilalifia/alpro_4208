//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    vector<int> data = {5, 2, 9, 1, 7};

    insertionSort(data);

    cout << "Hasil Insertion Sort: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//Kompleksitas Waktu: O(n^2) - Terbaik: O(n) (jika array sudah hampir terurut)
//Kompleksitas Ruang: O(1)
