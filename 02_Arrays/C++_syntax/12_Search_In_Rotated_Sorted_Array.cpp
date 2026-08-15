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
int Binary_search(int arr[],int s,int e,int value){
    int start = s;
    int end = e;
    

    while(start<=end){
         int mid = start + (end-start)/2;
        if(arr[mid] == value){
            return mid;
        }
        else if(arr[mid]<value){
            start= mid + 1;
        }
        else{
            end = mid - 1;
        }
       

    }
    return -1;
}

int main(){
    int arr[9] = {5,6,7,8,9,0,2,3,4};
    int size = 9;
    int value = 8;

    int index = pivot(arr,size);

    int ans;

    if(value >= arr[index] && value <= arr[size-1]){
        ans = Binary_search(arr,index,size-1,value);
    }
    else{
        ans = Binary_search(arr,0,index-1,value);
    }

    cout << ans;

    return 0;
}