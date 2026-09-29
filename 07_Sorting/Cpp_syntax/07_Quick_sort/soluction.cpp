#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr,int s,int e){
    int idx = s-1,pivot = arr[e];

    for(int j = s;j<e;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[e],arr[idx]);
    return idx;
}

void quick_sort(vector<int> &arr, int s,int e){
    if(s<e){
        int pivtidx = partition(arr,s,e);

        quick_sort(arr,s,pivtidx-1);
        quick_sort(arr,pivtidx+1,e);
    }
}

int main()
{
    vector<int> arr = {6, 2, 3, 1, 5, 4, 9, 8, 7};
    quick_sort(arr, 0, arr.size() - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}