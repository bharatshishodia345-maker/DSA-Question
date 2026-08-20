# Monkey Sort (Bogosort)

## Problem

Sort an array by randomly shuffling it until it becomes sorted.

## Approach

- Check if the array is sorted.
- If not sorted:
  - Shuffle the array randomly.
  - Repeat until the array becomes sorted.

## Time Complexity

Worst Case: Infinite (Unbounded)

Average Case: Extremely Slow

## Space Complexity

O(1)

## Example

Input

```python
[5,6,8,2,3]
```

Possible Output

```python
[3,2,6,5,8]
[8,5,6,2,3]
[2,3,5,6,8]
```