#include <iostream>
using namespace std;


int pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int arr[10] = {5,6,7,8,9,0,2,3,4};
    int size = 10;
    int index = pivot(arr,size);
    cout<<"pivot"<<' '<<index<<endl;
}