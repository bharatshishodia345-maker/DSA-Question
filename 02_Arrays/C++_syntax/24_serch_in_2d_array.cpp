#include <iostream>
using namespace std;

int printmaxsum(int arr[][3], int value ){
    int row = 3;
    int col = 3;
    
    int start = 0;
    int end = row*col-1;

    while(start <= end){
        int mid = (start+end)/2;
        int element = arr[mid/col][mid%col];
        
        if(element == value){
            return 1;
        }
        else if(element < value){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}




int main(){

    int arr[3][3];

    cout<<"Enter array element"<<endl;
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int value = 8;
    cout<<printmaxsum(arr,value)<<endl;
}