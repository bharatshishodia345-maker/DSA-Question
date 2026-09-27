#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>&arr,int s,int mid,int e){
	vector<int>temp;
	int Invcount = 0;
	int i = s,j = mid+1;
	while(i<= mid && j <= e){
		if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
			i++;
		}
		else{
			temp.push_back(arr[j]);
			Invcount += (mid-i+1);
			j++;
		}
	}
		while(i<=mid){
			temp.push_back(arr[i]);
			i++;
		}
		while(j<=e){
			temp.push_back(arr[j]);
			j++;
		}
	for(int inx = 0;inx<temp.size(); inx++){
		arr[inx+s] = temp[inx];
	}
	
	return Invcount;
}

int mergesort(vector<int>&arr,int s,int e){
	if(s<e){
		int mid = s+(e-s)/2;

		int friInv = mergesort(arr,s,mid);
		int seconInv = mergesort(arr,mid+1,e);

		int Inver = merge(arr,s,mid,e);
		return friInv + seconInv + Inver;
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int s = 0;
	
	int ans = mergesort(arr,s,arr.size()-1);
	cout<<ans<<endl;
}
