#include <iostream>
using namespace std;

void Insertion_sort(int arr[],int size){

    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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

    Insertion_sort(arr, size);
    print(arr, size);

    return 0;
}