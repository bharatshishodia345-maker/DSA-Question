## 01. Unordered Map

### Problem Statement

Practice basic operations of C++ `unordered_map` including insertion, accessing elements, iteration, and finding the size of the map.

### Key Concepts

- `unordered_map`
- `pair`
- `make_pair()`
- `insert()`
- Iterators
- `begin()` and `end()`
- `size()`

### Complexity

- Insert: Average O(1)
- Search: Average O(1)
- Traversal: O(n)
- Space: O(n)

---

## 02. Maximum Frequency Element

### Problem Statement

Given an integer array, find the element having the maximum frequency.

### Approach

1. Create an `unordered_map` to store the frequency of each element.
2. Traverse the array and increment the frequency.
3. Find the maximum frequency.
4. Traverse the array again and return the first element having that frequency.

### Example

```text
Input:
1 1 2 5 3 3 1 6 8 8

Output:
1

## 03. First Non-Repeating Element

### Problem Statement

Given an integer array, find the first element whose frequency is exactly one.

### Approach

1. Store the frequency of every element using `unordered_map`.
2. Traverse the original array again.
3. Find the first element whose frequency is `1`.

### Complexity

- Time: Average O(n)
- Space: O(n)

---

## 04. Maximum Frequency Character

### Problem Statement

Given a character array, find the character with the maximum frequency.

### Approach

1. Store the frequency of every character using `unordered_map`.
2. Traverse the array.
3. Track the character having the highest frequency.

### Complexity

- Time: Average O(n)
- Space: O(n)