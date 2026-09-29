#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int max_sum = INT_MIN;
	int cursum = 0;
	for (int st = 0; st<n;st++){
		cursum += arr[st];
		max_sum = max(cursum,max_sum);
		if(cursum< 0){
			cursum = 0;
		}
	}
	cout<<max_sum<<endl;
	
}
