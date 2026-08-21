#include <iostream>
using namespace std;

void Bubble_sort(int arr[], int size) {

    for (int i = 1; i < size; i++) {

        bool swapped = false;

        for (int j = 0; j < size - i; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Stop if array is already sorted
        if (!swapped) {
            break;
        }
    }
}

void print(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[10] = {3, 5, 21, 6, 4, 9, 8, 7, 10, 2};
    int size = 10;

    Bubble_sort(arr, size);
    print(arr, size);

    return 0;
}