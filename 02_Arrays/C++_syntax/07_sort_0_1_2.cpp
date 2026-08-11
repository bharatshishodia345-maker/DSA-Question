#include <iostream>
using namespace std;

void sort_012(int arr[],int size){
    int low = 0;
    int mid = 0;
    int high = size - 1;
    while(mid <= high){
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        
        else{
            swap(arr[mid],arr[high]);
            high--;
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
    int arr[10] = {1,0,2,1,2,0,1,0,2,1};
    int size = 10;
    sort_012(arr,size);
    print(arr,size);

}