//Nabila Alifia Rizky
//A11.2022.14325
//4208

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> data = {5, 2, 9, 1, 7};

    selectionSort(data);

    cout << "Hasil Selection Sort: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//Kompleksitas Waktu: O(n^2)
//Kompleksitas Ruang: O(1)

