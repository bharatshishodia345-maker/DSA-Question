#include <iostream>
using namespace std;

void alternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        if (i + 1 < size) {
            swap(arr[i], arr[i + 1]);
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
    int arr[10] = {2, 1, 4, 3, 6, 5, 8, 7, 9, 0};

    alternate(arr, 10);
    print(arr, 10);
}