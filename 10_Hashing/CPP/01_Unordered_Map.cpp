#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>

int main(){
    unordered_map<string,int> m;

    pair<string,int> p = make_pair("Bharat", 5);
    m["My"] = 6;
    m["luckey"] = 4;
    m["Num"] = 3;
    m["is"] = 1;
    m.insert(p);

    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    cout<<m.size()<<endl;
}