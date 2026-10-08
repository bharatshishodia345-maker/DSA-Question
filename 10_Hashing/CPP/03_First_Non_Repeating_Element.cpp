#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,1,2,5,3,5,6,2};
    unordered_map<int,int> f;

    for(int i = 0; i<10;i++){
        f[arr[i]]++;
    }
    for(int i = 0;i<10;i++){
        if(f[arr[i]] == 1){
            cout<< i<<endl;
            return 0;
        }
    }
    return -1;
}