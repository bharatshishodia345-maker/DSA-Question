# Trees - C++

This folder contains Binary Tree and Tree-based DSA problems implemented in C++.

---

## 01. Build Binary Tree from Preorder

### Problem

Given a preorder representation of a binary tree where `-1` represents a NULL node, construct the binary tree recursively.

### Input Representation

```text
1 2 -1 -1 3 4 -1 -1 5 -1 -1


## 02. Preorder Traversal

### Problem

Given a binary tree, print its nodes using preorder traversal.

### Traversal Order

```text
Root → Left → Right

# Trees - C++

This folder contains Binary Tree and Tree Traversal problems implemented in C++.

## Problems Covered

| # | Problem | Technique | Time | Space |
|---|---|---|---|---|
| 01 | Build Binary Tree | Recursion | O(n) | O(h) |
| 02 | Preorder Traversal | Recursion | O(n) | O(h) |
| 03 | Inorder Traversal | Recursion | O(n) | O(h) |
| 04 | Postorder Traversal | Recursion | O(n) | O(h) |
| 05 | Levelorder Traversal | Queue / BFS | O(n) | O(w) |

Where:
- `n` = number of nodes
- `h` = height of the tree
- `w` = maximum width of the tree

---

# 01. Build Binary Tree

## Problem

Given a preorder representation of a binary tree where `-1` represents a NULL node, construct the binary tree recursively.

### Example

```text
Input:
1 2 -1 -1 3 4 -1 -1 5 -1 -1