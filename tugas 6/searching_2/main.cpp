#include <iostream>
#include <vector>

int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> data = {1, 2, 5, 7, 9};
    int target = 9;

    int index = binarySearch(data, target);
    if (index != -1) {
        cout << "Target ditemukan pada indeks: " << index << endl;
    } else {
        cout << "Target tidak ditemukan." << endl;
    }

    return 0;
}

//Kompleksitas Waktu: O(log n)
//Kompleksitas Ruang: O(1)



