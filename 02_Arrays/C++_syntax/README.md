# 📚 Arrays — DSA Practice

This folder contains my **Array Data Structure practice** using C++.

I am solving array problems step-by-step to improve:
- Problem-solving skills
- Algorithmic thinking
- Time & Space Complexity analysis
- C++ programming
- Interview preparation

---

## 📂 Folder Structure

```text
02_Arrays/
│
├── Cpp/
│   ├── 01_Reverse_Array.cpp
│   ├── 02_Alternate_Swap.cpp
│   ├── 03_Find_Unique.cpp
│   ├── 04_Common_Elements.cpp
│   ├── 05_Three_Sum_Triplet.cpp
│   ├── 06_Sort_0_1.cpp
│   └── 07_Sort_0_1_2.cpp
│
├── Python/
│   └── ...
│
└── README.md
```

---

# 🧩 Problems Solved

| # | Problem | Approach | Time | Space |
|---|---|---|---|---|
| 01 | Reverse an Array | Two Pointer | O(n) | O(1) |
| 02 | Alternate Swap | Two Pointer / Pair Swap | O(n) | O(1) |
| 03 | Find Unique Element | XOR | O(n) | O(1) |
| 04 | Find Common Elements | Two Pointer | O(n + m) | O(k) |
| 05 | Three Sum / Triplet | Three Nested Loops | O(n³) | O(1) |
| 06 | Sort 0 and 1 | Two Pointer | O(n) | O(1) |
| 07 | Sort 0, 1 and 2 | Dutch National Flag | O(n) | O(1) |

> **Note:** `k` represents the number of common elements stored in the result.

---

# 01. 🔄 Reverse an Array

### Problem

Reverse the elements of an array in-place.

### Example

```text
Input:
1 2 3 4 5

Output:
5 4 3 2 1
```

### Approach

Use the **Two Pointer Technique**:

- `start` points to the first element.
- `end` points to the last element.
- Swap both elements.
- Move `start` forward.
- Move `end` backward.
- Continue until they meet.

### Complexity

```text
Time Complexity  : O(n)
Space Complexity : O(1)
```

### File

`Cpp/01_Reverse_Array.cpp`

---

# 02. 🔁 Alternate Swap

### Problem

Swap every pair of adjacent elements in an array.

### Example

```text
Input:
2 1 4 3 6 5

Output:
1 2 3 4 5 6
```

### Approach

Start from index `0` and swap:

```text
arr[0] ↔ arr[1]
arr[2] ↔ arr[3]
arr[4] ↔ arr[5]
...
```

The condition `i + 1 < size` prevents accessing an invalid index when the array contains an odd number of elements.

### Complexity

```text
Time Complexity  : O(n)
Space Complexity : O(1)
```

### File

`Cpp/02_Alternate_Swap.cpp`

---

# 03. 🔍 Find Unique Element

### Problem

Find the element that appears only once when every other element appears twice.

### Example

```text
Input:
1 2 3 1 2 3 4

Output:
4
```

### Approach

Use the **XOR operator (`^`)**.

Important XOR properties:

```text
a ^ a = 0
a ^ 0 = a
```

Therefore, duplicate elements cancel each other.

Example:

```text
1 ^ 2 ^ 3 ^ 1 ^ 2 ^ 3 ^ 4

= 0 ^ 0 ^ 0 ^ 4

= 4
```

### Complexity

```text
Time Complexity  : O(n)
Space Complexity : O(1)
```

### File

`Cpp/03_Find_Unique.cpp`

---

# 04. 🔗 Find Common Elements

### Problem

Find common elements between two **sorted arrays**.

### Example

```text
Array 1:
1 2 2 3 3 4 5 7 8 8

Array 2:
1 2 3 3 5

Output:
1 2 3 3 5
```

### Approach

Use two pointers:

```text
i → Array 1
j → Array 2
```

Compare both elements:

- If equal → store the element and move both pointers.
- If `arr1[i] < arr2[j]` → move `i`.
- Otherwise → move `j`.

### Important

The arrays must be **sorted** for this approach.

### Complexity

```text
Time Complexity  : O(n + m)
Space Complexity : O(k)
```

Where `k` is the number of common elements stored in the result.

### File

`Cpp/04_Common_Elements.cpp`

---

# 05. 🎯 Three Sum / Triplet

### Problem

Find all combinations of three different array elements whose sum equals a given value.

### Example

```text
Input:
1 2 3 4 5 6 7

Target:
10

Output:
1 + 2 + 7 = 10
1 + 3 + 6 = 10
1 + 4 + 5 = 10
2 + 3 + 5 = 10
```

### Approach

Use three nested loops:

```text
i → first element
j → second element
k → third element
```

Check:

```text
arr[i] + arr[j] + arr[k] == target
```

### Complexity

```text
Time Complexity  : O(n³)
Space Complexity : O(1)
```

### File

`Cpp/05_Three_Sum_Triplet.cpp`

---

# 06. ⚫⚪ Sort 0 and 1

### Problem

Arrange an array containing only `0` and `1` so that all `0`s come before all `1`s.

### Example

```text
Input:
0 1 0 0 1 0 1 1

Output:
0 0 0 0 1 1 1 1
```

### Approach

Use the **Two Pointer Technique**.

```text
start → beginning of array
end   → end of array
```

- Move `start` while it points to `0`.
- Move `end` while it points to `1`.
- If `start` points to `1` and `end` points to `0`, swap them.

### Complexity

```text
Time Complexity  : O(n)
Space Complexity : O(1)
```

### File

`Cpp/06_Sort_0_1.cpp`

---

# 07. 🇳🇱 Sort 0, 1 and 2

### Problem

Sort an array containing only `0`, `1`, and `2` without using a traditional sorting algorithm.

### Example

```text
Input:
1 0 2 1 2 0 1 0 2 1

Output:
0 0 0 1 1 1 2 2 2 1
```

> The expected output should contain all `0`s first, then `1`s, then `2`s.  
> For the given input, the correct sorted result is:
>
> `0 0 0 1 1 1 2 2 2`

### Approach

Use the **Dutch National Flag Algorithm**.

Maintain three pointers:

```text
low  → position for 0
mid  → current element
high → position for 2
```

Rules:

```text
arr[mid] == 0
→ swap arr[low] and arr[mid]
→ low++
→ mid++

arr[mid] == 1
→ mid++

arr[mid] == 2
→ swap arr[mid] and arr[high]
→ high--
```

### Complexity

```text
Time Complexity  : O(n)
Space Complexity : O(1)
```

### File

`Cpp/07_Sort_0_1_2.cpp`

---

# 📊 Complexity Summary

```text
Problem                         Time        Space

Reverse Array                   O(n)        O(1)
Alternate Swap                  O(n)        O(1)
Find Unique (XOR)               O(n)        O(1)
Common Elements                 O(n + m)    O(k)
Three Sum / Triplet             O(n³)       O(1)
Sort 0 and 1                    O(n)        O(1)
Sort 0, 1 and 2                 O(n)        O(1)
```

---

# 🧠 Concepts Learned

Through these problems, I practiced:

- Arrays
- Array Traversal
- Two Pointer Technique
- Swapping
- XOR Bitwise Operator
- Nested Loops
- Sorted Array Techniques
- In-place Algorithms
- Dutch National Flag Algorithm
- Time Complexity
- Space Complexity

---

# 🚀 Future Problems

I will continue adding new array problems below.

| # | Problem | Approach | Time | Space |
|---|---|---|---|---|
| 08 | _Coming Soon_ | - | - | - |
| 09 | _Coming Soon_ | - | - | - |
| 10 | _Coming Soon_ | - | - | - |

### Adding a new problem

Whenever a new problem is solved:

1. Add the `.cpp` file inside `Cpp/`.
2. Add one row to the **Problems Solved** table.
3. Add a detailed section below the previous problem.
4. Add its complexity to the **Complexity Summary**.
5. Update the **Future Problems** table.

---

## 🎯 Goal

Build strong DSA fundamentals and gradually solve problems from:

```text
Arrays
   ↓
Searching
   ↓
Sorting
   ↓
Linked List
   ↓
Stack
   ↓
Queue
   ↓
Recursion
   ↓
Trees
   ↓
Graphs
   ↓
Dynamic Programming
```

**Consistency > Quantity 🚀**