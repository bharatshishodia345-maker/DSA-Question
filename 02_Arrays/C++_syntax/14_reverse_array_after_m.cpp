#include <iostream>
#include<vector>
using namespace std;

vector<int> reverse_array(vector<int> v,int m){
    int start = m+1;
    int end = v.size() - 1;

    while(start<=end){
        swap(v[start],v[end]);
        start ++;
        end--;
    }
    return v;
}

void print(vector<int> v){
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}


int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    int m = 3;
    vector<int> ans = reverse_array(v,m);
    print(ans);
}
