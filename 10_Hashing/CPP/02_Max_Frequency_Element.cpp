#include <bits/stdc++.h>
using namespace std;

int findMaxFrequency(int arr[], int n) {

    unordered_map<int, int> count;

    int maxfreq = 0;
    int maxans = 0;

    for(int i = 0; i < n; i++) {
        count[arr[i]]++;

        maxfreq = max(maxfreq, count[arr[i]]);
    }

    for(int i = 0; i < n; i++) {

        if(maxfreq == count[arr[i]]) {
            maxans = arr[i];
            break;
        }
    }

    return maxans;
}

int main() {

    int arr[10] = {1,1,2,5,3,3,1,6,8,8};
    int n = 10;

    int ans = findMaxFrequency(arr, n);

    cout << ans << endl;

    return 0;
}