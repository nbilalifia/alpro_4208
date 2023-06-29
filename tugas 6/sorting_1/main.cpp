#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> data = {5, 2, 9, 1, 7};

    bubbleSort(data);

    cout << "Hasil Bubble Sort: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//Kompleksitas Waktu: O(n^2)
//Kompleksitas Ruang: O(1)
