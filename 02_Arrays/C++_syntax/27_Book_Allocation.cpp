#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr,int n,int m,int mid){
    int student = 1, pages = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]> mid){
            return false;
        }
        if(pages + arr[i] <= mid){
            pages+=arr[i];
        }
        else{
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false:true;
}

int Book_Allocation(vector<int> &arr, int n,int m){
    if(m>n){
        return -1;
    }
    int sum = 0;
    for(int i= 0;i<n;i++){
        sum += arr[i];
    }
    
    int s = 0,end = sum;
    int ans = -1;
    while(s<=end){
        int mid = s+(end-s)/2;
        if(isvalid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            s = mid + 1;   
        }
    }
    return  ans;
}


int main(){
    int n = 6;
    vector<int> arr = {2,5,3,6,8,9};

    int pages = Book_Allocation(arr,n,2);
    cout<<"The maximum minimum page is "<<pages<<endl;

}