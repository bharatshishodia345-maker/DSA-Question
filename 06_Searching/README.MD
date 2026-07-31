# Searching Algorithms in Python

This folder contains my implementation of the most fundamental searching algorithms using Python.

## 📚 Topics Covered

* Linear Search
* Binary Search (Recursive)
* Searching in Arrays
* Recursive Algorithm
* Divide and Conquer Technique

---

## 📂 Files

### 01_linear_search.py

Implements the **Linear Search** algorithm.

### Features

* Searches an element one by one.
* Returns the index if the element is found.
* Returns `-1` if the element is not present.

### Time Complexity

* Best Case: **O(1)**
* Average Case: **O(n)**
* Worst Case: **O(n)**

---

### 02_binary_search.py

Implements the **Recursive Binary Search** algorithm.

### Features

* Works only on a **sorted array**.
* Uses recursion to divide the search space into halves.
* Returns the index of the target element.
* Returns `-1` if the element is not found.

### Time Complexity

* Best Case: **O(1)**
* Average Case: **O(log n)**
* Worst Case: **O(log n)**

---

## 📖 Algorithm Comparison

| Algorithm     | Best | Average  | Worst    | Sorted Array Required |
| ------------- | ---- | -------- | -------- | --------------------- |
| Linear Search | O(1) | O(n)     | O(n)     | No                    |
| Binary Search | O(1) | O(log n) | O(log n) | Yes                   |

---

## 🎯 Learning Outcome

Through these implementations, I learned:

* How Linear Search works by checking each element sequentially.
* How Binary Search efficiently reduces the search space using recursion.
* The importance of sorted data for Binary Search.
* The difference in time complexity between O(n) and O(log n).

These algorithms form the foundation for more advanced searching and optimization techniques in Data Structures and Algorithms.
