#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[10] = {'a','b','c','l','r','r','k','l','v'};

    unordered_map<char,int> f;

    for(int i = 0;i<10;i++){
        f[arr[i]]++;
    }
    char ans = 0;
    int max_freq = '\0';

    for(int i = 0; i<10;i++){
        if(f[arr[i]]>max_freq){
            max_freq = f[arr[i]];
            ans = arr[i];
        }
        
    }
    cout<< ans<<endl;
}