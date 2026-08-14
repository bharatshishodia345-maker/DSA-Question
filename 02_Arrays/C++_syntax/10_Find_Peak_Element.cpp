# include <iostream>
using namespace std;

int find_peek(int arr[],int size){
    int start = 0;
    int end = size-1;
    while (start<end){
        int mid = start + (end - start)/2;
        if(arr[mid]<  arr[mid+1]){
            start = mid+1; 
        }
        else{
            end = mid;
        }
    }
    return start;   
    
}

int main(){
    int arr[6] = {0,2,6,9,2,0};
    int size = 6;
    int index = find_peek(arr,size);
    cout<< index<<endl;
}