#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter Your String"<<endl;
    cin>>s;

    unordered_map<char,int>have;

    for(int i = 0;i<s.size();i++){
        have[s[i]]++;
    }
    unordered_map<char,int>need;
    need['b'] = 1;
    need['h'] = 1;
    need['a'] = 2;
    need['r'] = 1;
    need['t'] = 1;

    int res = INT_MAX;
    for(auto i : need){
        char c = i.first;
        int fneed = i.second;
        int fhave = have[c];

        int time = fhave/fneed;
        res = min(res,time);
        
    
    }
    cout << "Bharat can be formed: " << res << " times" << endl;

}