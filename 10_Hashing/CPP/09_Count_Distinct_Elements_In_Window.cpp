#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Count distinct elements in every window of size k
int main() {
    int n = 7;
    vector<int> arr = {1, 2, 1, 3, 4, 2, 5};
    int k = 4;

    if (k <= 0 || k > n) {
        cout << "Invalid window size" << endl;
        return 0;
    }

    unordered_map<int, int> freq;

    // Build the first window
    for (int i = 0; i < k; i++) {
        freq[arr[i]]++;
    }

    cout << freq.size() << endl;

    // Slide the window
    for (int i = k; i < n; i++) {
        int outgoing = arr[i - k];

        // Remove the outgoing element
        freq[outgoing]--;

        if (freq[outgoing] == 0) {
            freq.erase(outgoing);
        }

        // Add the incoming element
        freq[arr[i]]++;

        // Number of distinct elements in the current window
        cout << freq.size() << endl;
    }

    return 0;
}