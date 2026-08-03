# Selection Sort

## Problem

Sort an array in ascending order using the Selection Sort algorithm.

## Approach

- Assume the current index contains the smallest element.
- Traverse the remaining unsorted part of the array.
- Find the actual minimum element.
- Swap it with the current position.
- Repeat until the array is sorted.

## Algorithm

1. Start from the first element.
2. Find the minimum element in the remaining array.
3. Swap it with the current element.
4. Repeat for all positions.

## Time Complexity

- Best: O(n²)
- Average: O(n²)
- Worst: O(n²)

## Space Complexity

O(1)

## Example

Input

```python
[5, 6, 2, 4, 8, 3, 7, 9, 1]
```

Output

```python
[1, 2, 3, 4, 5, 6, 7, 8, 9]
```