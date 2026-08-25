#include <iostream>
using namespace std;

int merge_sort_array(int arr1[], int n,int arr2[], int m, int arr[]){
    int i = 0,j = 0,k = 0;
    while(i< n&& j<m){
        if(arr1[i]< arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
            
        }
        else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
        

    }
    while(i<n){
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j<m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
    
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){

    int arr1[8] = {1,3,5,6,7,8,9,12};
    int arr2[3] = {0,2,4};
    int arr[12] = {0};
    int n = 8;
    int m = 3;

    merge_sort_array(arr1,n,arr2,m,arr);
    print(arr,11);


}