#include <iostream>
using namespace std;


int gcd(int l,int r){
    if (l == 0){
        return r;
    }    
    if(r == 0){
        return l;
    }
    while (l !=r)
    {
        if(l>r){
           l = l-r;
        }
        else{
            r =r-l;
        }
    }
    return l;
    
}


int main(){
    int n;
    int l;
    cout<<"enter value of N "<<endl;
    cin>>n;
    cout<<"enter value of L "<<endl;
    cin>>l;
    int ans;
    ans = gcd(n,l);
    cout<<"The GCD value of L & N is "<<ans<<endl;
}