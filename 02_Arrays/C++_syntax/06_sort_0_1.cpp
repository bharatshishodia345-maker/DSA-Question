#include <iostream>
using namespace std;

void sort_0_1(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {

        while (arr[start] == 0 && start < end) {
            start++;
        }

        while (arr[end] == 1 && start < end) {
            end--;
        }

        if (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main (){
    int arr[10] = {0,1,0,0,1,0,1,1,0,1};
    int size = 10;
    sort_0_1(arr,size);
    print(arr,size);
}