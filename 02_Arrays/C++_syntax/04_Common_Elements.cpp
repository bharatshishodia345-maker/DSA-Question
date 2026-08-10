#include <iostream>
#include <vector>
using namespace std;

vector<int> search(int arr1[], int arr2[], int n, int m) {

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {

        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return ans;
}

int main() {

    int arr1[10] = {1, 2, 2, 3, 3, 4, 5, 7, 8, 8};
    int arr2[5] = {1, 2, 3, 3, 5};

    int n = 10;
    int m = 5;

    vector<int> result = search(arr1, arr2, n, m);

    cout << "Common elements: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}