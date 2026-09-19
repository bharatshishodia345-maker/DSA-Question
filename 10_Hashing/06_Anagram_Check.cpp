#include <bits/stdc++.h>
using namespace std;

int fun(unordered_map<char,int>have,unordered_map<char,int>need){
    for(auto i: need){
        char c = i.first;
        int fneed = i.second;
        int fhave = have[c];
        if(fhave != fneed){
            cout<<"Not Posible"<<endl;
            return 0;
        }
    }
    cout<<"Posible"<<endl;
    return 0;

}

int main(){

    string str1;
    string str2;
    cout<<"Enter String frist String"<<endl;
    cin>>str1;
    cout<<"Enter second String"<<endl;
    cin>>str2;

    unordered_map<char,int>have;
    unordered_map<char,int>need;

    for(int i = 0; i<str1.size();i++){
        need[str1[i]]++;
    }
    for(int i = 0; i<str2.size();i++){
        have[str2[i]]++;
    }
    return fun(have,need);
}