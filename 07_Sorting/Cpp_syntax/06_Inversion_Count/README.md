# Sorting - C++

This folder contains sorting algorithms and sorting-based problems implemented in C++.

## Problems Covered

| # | Problem | Approach | Time | Space |
|---|---|---|---|---|
| 01 | Selection Sort | Select minimum element | O(n²) | O(1) |
| 02 | Bubble Sort | Repeated adjacent swaps | O(n²) | O(1) |
| 03 | Insertion Sort | Insert element at correct position | O(n²) | O(1) |
| 04 | Merge Two Sorted Arrays | Two-pointer technique | O(n + m) | O(n + m) |
| 05 | Merge Sort | Divide and conquer | O(n log n) | O(n) |
| 06 | Inversion Count | Merge Sort + counting | O(n log n) | O(n) |

---

# 06. Inversion Count

## Problem

Given an array, count the number of inversions.

An inversion is a pair of indices `(i, j)` such that:

```text
i < j
arr[i] > arr[j]