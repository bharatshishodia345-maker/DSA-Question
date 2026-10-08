#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool anagram(string s1,string s2){
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;

    for(char ch: s1){
        if(ch !=' '){
            ch = tolower(ch);
            mp1[ch]++;
        }
    }
    for(char ch: s2){
        if(ch !=' '){
            ch = tolower(ch);
            mp2[ch]++;
        }
    }
    return mp1 == mp2;
}

int main(){
    string s1,s2;
    s1 = "Bharat";
    s2 = "tarahb";
    if(anagram(s1,s2)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}