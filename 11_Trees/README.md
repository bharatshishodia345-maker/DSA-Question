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


## 11. Diameter of a Binary Tree

- **File:** `11_Diameter_of_Binary_Tree.cpp`
- **Language:** C++
- **Concept:** Binary Tree, Recursion, Tree Height
- **Approach:** Calculate the height of each subtree and update the maximum diameter using the sum of left and right subtree heights.
- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(h), where h is the height of the tree.
- **Output:** `3`

## 12. Top View of Binary Tree

- **File:** `12_Top_View_of_Binary_Tree.cpp`
- **Language:** C++
- **Concept:** Binary Tree, BFS, Queue, Horizontal Distance, Map
- **Approach:** Level-order traversal records the first node encountered at each horizontal distance.
- **Time Complexity:** O(n log n)
- **Space Complexity:** O(n)
- **Output:** `2 1 3 5`

## 13. Kth Level of Binary Tree

- **File:** `13_Kth_Level_of_Binary_Tree.cpp`
- **Language:** C++
- **Concept:** Binary Tree, Recursion
- **Approach:** Recursively traverse the tree, reducing k by one at each level. Print nodes when k becomes 1.
- **Time Complexity:** O(n) worst case
- **Space Complexity:** O(h), where h is the tree height.
- **Output:** `4 5`

## 14. Lowest Common Ancestor (LCA)

- **File:** `14_Lowest_Common_Ancestor.cpp`
- **Language:** C++
- **Concept:** Binary Tree, Recursion, Lowest Common Ancestor
- **Approach:** Recursively search the left and right subtrees. If both return a target, the current node is the LCA; otherwise, propagate the non-null result.
- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(h), where h is the tree height.
- **Example:** LCA of nodes 4 and 5 is 2.

## 15. Binary Search Tree Operations

- **File:** `15_Binary_Search_Tree_Operations.cpp`
- **Language:** C++
- **Concepts:** Binary Search Tree, Recursion, Searching, Insertion, Deletion, Tree Traversals

### Supported Operations

| Type | Operation |
|---|---|
| 1 value | Insert a value |
| 2 value | Delete a value |
| 3 value | Search for a value |
| 4 | Inorder traversal |
| 5 | Preorder traversal |
| 6 | Postorder traversal |

### Complexity

Let n be the number of nodes and h be the height of the tree.

- **Insertion:** O(h)
- **Searching:** O(h)
- **Deletion:** O(h)
- **Traversals:** O(n)
- **Space:** O(h) auxiliary recursion stack for recursive operations

For a balanced BST, h is O(log n). In a highly skewed BST, h can be O(n).