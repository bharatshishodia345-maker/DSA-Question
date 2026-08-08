
#include<iostream>
using namespace std;
bool linear_search(int arr[], int size,int value){
    for(int i = 0;i <=size;i++){
        if(arr[i] == value){
            return 1;
        }
    
    }
    return 0;
}


int main(){
    int arr[10] = {3,2,1,5,6,9,7,8,4,11};
    int value = 40;
    int size = 10;

    bool found = linear_search(arr, size,value);
    if(found){
        cout<<"Yes__This Value In Array";
    }
    else{
        cout<<"No__This Value Not In Array";
    }

    
}