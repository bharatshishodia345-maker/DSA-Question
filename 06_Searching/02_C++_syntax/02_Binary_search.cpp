#include <iostream>
using namespace std;

int Binary_search(int arr[],int size,int value){
    int start = 0;
    int end = size-1;
    

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
    int arr[10] = {2,3,6,7,8,9,10,15,19,20};
    int size = 10;
    int value = 20;
    int index = Binary_search(arr,size,value);
    cout<<index<<endl;

}