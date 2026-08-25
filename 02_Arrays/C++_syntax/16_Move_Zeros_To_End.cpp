#include <iostream>
using namespace std;

void zero_sift(int arr[], int n){
    int nonzero = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonzero]);
            nonzero++;
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {0,1,2,0,3,0,5,0,0,5};
    int n = 10;
    zero_sift(arr,n);
    print(arr,n);
}