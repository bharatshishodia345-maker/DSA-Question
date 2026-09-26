#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int s,int mid,int e){
    vector<int> temp;

    int i = s,j = mid+1;
    while (i <= mid && j <= e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
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

    for(int i = 0;i<temp.size();i++){
        arr[i+s] = temp[i];
    }
    
    
}

void mergesort(vector<int> &arr,int s,int e){
    if(s<e){
        int mid = s + (e - s)/2;

        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);

        merge(arr,s,mid,e);
    }
    
}

int main(){
   
    vector<int> arr = {8,6,9,7,10,21,45,26,41,33};
    mergesort(arr,0,arr.size()-1);

    for(int val : arr){
        cout<< val<<" ";
    }
    cout<<endl;
    return 0;
    


}