#include <iostream>
using namespace std;

int first(int arr[], int size, int value) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == value) {
            ans = mid;
            end = mid - 1;      // Search left side
        }
        else if (arr[mid] < value) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int last(int arr[], int size, int value) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == value) {
            ans = mid;
            start = mid + 1;    // Search right side
        }
        else if (arr[mid] < value) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int total(int arr[],int size,int value){
    int fast1 = first(arr,size,value);
    int second = last(arr,size,value);
    int total = second-fast1  + 1;
    cout<< total<<endl;
}

int main() {
    int arr[10] = {2, 3, 8, 8, 8, 8,8 , 15, 19, 20};

    int size = 10;
    int value = 8;

    cout << "First occurrence: " << first(arr, size, value) << endl;
    cout << "Last occurrence: " << last(arr, size, value) << endl;
    total(arr,size,value);

    return 0;
}