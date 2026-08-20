## 03. Selection Sort

### 📌 Problem

Given an unsorted array, sort the elements in ascending order using the Selection Sort algorithm.

### 💡 Approach

Selection Sort divides the array into two parts:

1. Sorted portion
2. Unsorted portion

For every position `i`:

- Assume `arr[i]` is the minimum element.
- Search for the smallest element in the remaining unsorted portion.
- Store its index in `min`.
- Swap `arr[i]` with `arr[min]`.
- Repeat until the entire array is sorted.

### 🔍 Example

Input:

```text
9 6 3 2 0 1 5 4 7 8