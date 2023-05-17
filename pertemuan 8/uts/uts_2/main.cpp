#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_SIZE] = {4, 7, 2, 9, 6};
    int size = 5;

    cout << "Array sebelum sorting: ";
    printArray(arr, size);

    selectionSortDescending(arr, size);
    cout << "Array setelah Selection Sort descending: ";
    printArray(arr, size);

    int resetArr[MAX_SIZE] = {4, 7, 2, 9, 6};

    bubbleSortDescending(resetArr, size);
    cout << "Array setelah Bubble Sort descending: ";
    printArray(resetArr, size);

    return 0;
}
