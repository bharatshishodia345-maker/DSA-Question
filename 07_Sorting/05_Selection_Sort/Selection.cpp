#include <iostream>
using namespace std;

void selection(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {

        int min = i;

        for (int j = i + 1; j < size; j++) {

            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        swap(arr[min], arr[i]);
    }
}

void print(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[10] = {9, 6, 3, 2, 0, 1, 5, 4, 7, 8};
    int size = 10;

    selection(arr, size);
    print(arr, size);

    return 0;
}