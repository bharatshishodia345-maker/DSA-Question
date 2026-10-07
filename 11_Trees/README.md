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
## 06. Binary Tree Operations

### Description
This program implements level-order insertion in a binary tree and performs
three standard tree traversals:

- Inorder Traversal
- Preorder Traversal
- Postorder Traversal

### Operations

| Operation | Description |
|-----------|-------------|
| `1 value` | Insert a node |
| `2` | Inorder Traversal |
| `3` | Preorder Traversal |
| `4` | Postorder Traversal |

### Traversals

#### Inorder
Left → Root → Right

#### Preorder
Root → Left → Right

#### Postorder
Left → Right → Root

### Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Level-order insertion | O(n) |
| Inorder traversal | O(n) |
| Preorder traversal | O(n) |
| Postorder traversal | O(n) |

Space complexity for traversal: **O(h)** for recursion, where `h` is tree height.

### Example

Input:
```text
8
1 1
1 2
1 3
1 4
1 5
2
3
4

## 07. Height of Binary Tree

### Description
Calculates the height of a binary tree using recursion.

### Approach
The height of a binary tree is calculated as:

```text
height = max(left subtree height, right subtree height) + 1

## 10. Same Tree

### Description
Checks whether two binary trees are identical in both structure and node values.

Two binary trees are considered the same when:
- Their corresponding nodes have the same values.
- Their left subtrees are identical.
- Their right subtrees are identical.

### Approach

The solution uses recursion.

For every pair of corresponding nodes:
1. If both are `NULL`, return `true`.
2. If only one is `NULL`, return `false`.
3. Compare their values.
4. Recursively compare the left subtrees.
5. Recursively compare the right subtrees.

### Complexity

- Time: **O(n)**
- Space: **O(h)**

Where `n` is the number of nodes and `h` is the height of the tree.