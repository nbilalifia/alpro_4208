#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void findSmallestOddAndEven(int numbers[], int size) {
    int smallestOdd = -1;
    int smallestEven = -1;
    int oddIndex = -1;
    int evenIndex = -1;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            if (smallestEven == -1 || numbers[i] < smallestEven) {
                smallestEven = numbers[i];
                evenIndex = i;
            }
        } else {
            if (smallestOdd == -1 || numbers[i] < smallestOdd) {
                smallestOdd = numbers[i];
                oddIndex = i;
            }
        }
    }

    if (oddIndex != -1) {
        cout << "Nilai ganjil terkecil: " << smallestOdd << ", indeks: " << oddIndex << endl;
    } else {
        cout << "Tidak ada nilai ganjil dalam urutan bilangan acak." << endl;
    }

    if (evenIndex != -1) {
        cout << "Nilai genap terkecil: " << smallestEven << ", indeks: " << evenIndex << endl;
    } else {
        cout << "Tidak ada nilai genap dalam urutan bilangan acak." << endl;
    }
}

int main() {
    int numbers[MAX_SIZE] = {5, 2, 7, 10, 3, 8};
    int size = 6;

    findSmallestOddAndEven(numbers, size);

    return 0;
}
