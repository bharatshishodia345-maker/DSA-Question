# Merge Sort in Python

## Overview

Merge Sort is a Divide and Conquer sorting algorithm. It recursively divides the array into smaller subarrays, sorts them, and then merges them back together in sorted order.

---

## Algorithm

1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the two sorted halves into one sorted array.

---

## Example

### Input

```python
[1, 5, 2, 6, 3, 9, 7]
```

### Output

```python
[1, 2, 3, 5, 6, 7, 9]
```

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

---

## Space Complexity

```
O(n)
```

Merge Sort requires extra memory for merging subarrays.

---

## Advantages

- Stable sorting algorithm
- Guaranteed O(n log n) performance
- Efficient for large datasets
- Suitable for linked lists

---

## Disadvantages

- Requires additional memory
- Slower than Quick Sort in many practical in-memory cases

---

## Concepts Covered

- Divide and Conquer
- Recursion
- Merging Sorted Arrays
- Time Complexity Analysis

---

## File

- `merge_sort.py` — Merge Sort implementation in Python.