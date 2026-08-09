#include <iostream>
using namespace std;


void find_uniqe(int arr[],int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];

    }
    cout<<ans<<endl;
}


int main(){
    int arr[11] = {1,2,3,1,2,3,4,5,4,5,8};
    int size = 11;
    find_uniqe(arr,size);
}