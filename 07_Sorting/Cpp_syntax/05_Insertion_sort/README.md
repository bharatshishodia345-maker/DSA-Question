## 05. Insertion Sort

### 📌 Problem

Sort an unsorted array in ascending order using the Insertion Sort algorithm.

### 💡 Approach

Insertion Sort divides the array into:

- Sorted portion
- Unsorted portion

Starting from the second element, each element is taken as `temp` and inserted into its correct position in the already sorted portion.

Larger elements are shifted one position to the right until the correct position is found.

### 🔍 Example

Input:

```text
3 5 21 6 4 9 8 7 10 2