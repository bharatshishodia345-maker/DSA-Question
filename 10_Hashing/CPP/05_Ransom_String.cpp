#include <bits/stdc++.h>
using namespace std;

int fun(unordered_map<char,int>have,unordered_map<char,int>need){
    for(auto i: need){
        char c = i.first;
        int fneed = i.second;
        int fhave = have[c];
        if(fhave < fneed){
            cout<<"Not Posible"<<endl;
            return 0;
        }
    }
    cout<<"Posible"<<endl;
    return 0;

}

int main(){

    string ransom;
    string magazine;
    cout<<"Enter Ransom String"<<endl;
    cin>>ransom;
    cout<<"Enter Magazine String"<<endl;
    cin>>magazine;

    unordered_map<char,int>have;
    unordered_map<char,int>need;

    for(int i = 0; i<ransom.size();i++){
        need[ransom[i]]++;
    }
    for(int i = 0; i<magazine.size();i++){
        have[magazine[i]]++;
    }
    return fun(have,need);
}