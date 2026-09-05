#include <iostream>
#include <vector>
using namespace std;


int primecount(int n){
    int count  = 0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for (int i= 2; i<n;i++){
        if(prime[i]){
            count++;
            for(int j = 2*i; j<n;j=i+j){
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int ans;
    ans = primecount(n);
    cout<<"Number of primary 0 to "<< n<<" = "<<ans<<endl;
}