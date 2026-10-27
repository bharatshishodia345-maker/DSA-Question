# 🌳 Trees - C++

A collection of Binary Tree and Binary Search Tree (BST) problems implemented in C++.

This folder covers fundamental tree concepts, recursive algorithms, tree construction, traversal techniques, tree views, and common interview problems.

## 📚 Topics Covered

- Binary Tree Construction
- Preorder, Inorder, and Postorder Traversals
- Level Order Traversal (BFS)
- Binary Tree Operations
- Height and Diameter of a Binary Tree
- Top View of a Binary Tree
- Kth Level of a Binary Tree
- Lowest Common Ancestor (LCA)
- Binary Search Tree Operations
- Tree Construction from Inorder and Preorder
- Same Tree
- Symmetric Binary Tree

---

## 📑 Table of Contents

| # | Problem | Main Concept | File |
|---:|---|---|---|
| 01 | Build Binary Tree from Preorder | Recursion | `01_Build_Binary_Tree.cpp` |
| 02 | Preorder Traversal | Recursion | `02_Preorder_Traversal.cpp` |
| 03 | Inorder Traversal | Recursion | `03_Inorder_Traversal.cpp` |
| 04 | Postorder Traversal | Recursion | `04_Postorder_Traversal.cpp` |
| 05 | Level Order Traversal | Queue / BFS | `05_Levelorder_Traversal.cpp` |
| 06 | Binary Tree Operations | Insertion and Traversals | `06_Binary_Tree_Operations.cpp` |
| 07 | Height of Binary Tree | Recursion | `07_Height_of_Binaty_Tree.cpp` |
| 08 | Count the Nodes | Recursion | `08_Count_the_Node.cpp` |
| 09 | Sum of Nodes | Recursion | `09_sum_of_Nodes.cpp` |
| 10 | Same Tree | Recursion | `10_Same_Tree.cpp` |
| 11 | Diameter of Binary Tree | Height and Recursion | `11_Diameter_of_Binary_Tree.cpp` |
| 12 | Top View of Binary Tree | BFS, Map | `12_Top_View_of_Binary_Tree.cpp` |
| 13 | Kth Level of Binary Tree | Recursion | `13_Kth_Level_of_Binary_Tinary.cpp` |
| 14 | Lowest Common Ancestor (LCA) | Recursion | `14_Lowest_Common_Ancestor.cpp` |
| 15 | Binary Search Tree Operations | BST | `15_Binary_Search_Tree_Operations.cpp` |
| 16 | Diameter from Node Relationships | Tree Construction, Recursion | `16_Diameter_From_Node_Relationships.cpp` |
| 17 | BST Level Order Traversal | BST, Queue / BFS | `17_BST_Level_Order_Traversal.cpp` |
| 18 | Construct Tree from Inorder and Preorder | Recursion, Hash Map | `18_Construct_Tree_Inorder_Preorder.cpp` |
| 19 | Symmetric Binary Tree | Recursion, Mirror Trees | `19_Symmetric_Binary_Tree.cpp` |

> **Note:** Verify each filename against your actual folder. The filenames above are based on the README details provided and are not a live listing of your repository.

---

# 🧩 Problem Details

## 01. Build Binary Tree from Preorder

### Problem
Construct a binary tree from its preorder representation. The value `-1` represents a NULL node.

### Approach
Use recursion to create the root, followed by its left and right subtrees.

### Example Input
```text
1 2 -1 -1 3 4 -1 -1 5 -1 -1
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

Here, `n` is the number of nodes and `h` is the height of the tree.

---

## 02. Preorder Traversal

### Problem
Print the nodes of a binary tree in preorder.

### Traversal Order
```text
Root → Left → Right
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 03. Inorder Traversal

### Problem
Print the nodes of a binary tree in inorder.

### Traversal Order
```text
Left → Root → Right
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 04. Postorder Traversal

### Problem
Print the nodes of a binary tree in postorder.

### Traversal Order
```text
Left → Right → Root
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 05. Level Order Traversal

### Problem
Visit the nodes level by level, starting from the root.

### Approach
Use a queue to process nodes in FIFO order. This is also known as Breadth-First Search (BFS).

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(w)

Here, `w` is the maximum width of the tree.

---

## 06. Binary Tree Operations

### Description
Implements level-order insertion and the three standard tree traversals.

### Supported Operations

| Input | Operation |
|---|---|
| `1 value` | Insert a node |
| `2` | Inorder traversal |
| `3` | Preorder traversal |
| `4` | Postorder traversal |

### Complexity
- **Level-order insertion:** O(n)
- **Each traversal:** O(n)

---

## 07. Height of Binary Tree

### Description
Calculate the height of a binary tree using recursion.

### Approach
Calculate the height of each subtree and return the greater height plus one.

```text
height = max(left_height, right_height) + 1
```

For an empty tree, the height is `0` when height is measured in nodes.

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 08. Count the Nodes

### Description
Count the total number of nodes in a binary tree.

### Approach
Recursively count the left and right subtrees, then add one for the current node.

```text
count = 1 + left_count + right_count
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 09. Sum of Nodes

### Description
Calculate the sum of all node values in a binary tree.

### Approach
Add the current node's value to the sums of its left and right subtrees.

```text
sum = node_value + left_sum + right_sum
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 10. Same Tree

### Description
Determine whether two binary trees have the same structure and identical node values.

### Approach
1. If both nodes are NULL, return `true`.
2. If only one node is NULL, return `false`.
3. Compare their values.
4. Recursively compare the left subtrees.
5. Recursively compare the right subtrees.

### Complexity
- **Time:** O(n), assuming both trees contain at most n nodes
- **Auxiliary Space:** O(h) for recursion in the balanced case; O(n) in the worst case

---

## 11. Diameter of a Binary Tree

### Description
Find the diameter of a binary tree, defined as the longest path between any two nodes.

### Approach
Calculate subtree heights recursively and update the maximum path length using the left and right subtree heights.

**Note:** The reported numeric diameter depends on whether the implementation counts edges or nodes.

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 12. Top View of Binary Tree

### Description
Print the nodes visible when a binary tree is viewed from above.

### Approach
Use level-order traversal and horizontal distance from the root. Record the first node encountered at each horizontal distance.

### Complexity
- **Time:** O(n log n) when an ordered map is used
- **Auxiliary Space:** O(n)

---

## 13. Kth Level of Binary Tree

### Description
Print all nodes present at a specified level of a binary tree.

### Approach
Use recursion to move down the tree, decreasing the target level at each step. Print a node when the target level is reached.

### Complexity
- **Time:** O(n) in the worst case
- **Auxiliary Space:** O(h)

---

## 14. Lowest Common Ancestor (LCA)

### Description
Find the lowest common ancestor of two target nodes in a binary tree.

### Approach
Recursively search the left and right subtrees. When both searches return a target, the current node is their lowest common ancestor.

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h)

---

## 15. Binary Search Tree Operations

### Description
Implement standard Binary Search Tree operations.

### Supported Operations

| Input | Operation |
|---|---|
| `1 value` | Insert a value |
| `2 value` | Delete a value |
| `3 value` | Search for a value |
| `4` | Inorder traversal |
| `5` | Preorder traversal |
| `6` | Postorder traversal |

### Complexity

Let `h` be the height of the BST.

| Operation | Average Case* | Worst Case |
|---|---:|---:|
| Insertion | O(log n) | O(n) |
| Searching | O(log n) | O(n) |
| Deletion | O(log n) | O(n) |
| Traversals | O(n) | O(n) |

\*Average-case insertion, search, and deletion assume reasonably balanced tree shapes.

- **Auxiliary Space:** O(h) for recursive operations.

---

## 16. Diameter from Node Relationships

### Description
Construct a binary tree using parent-child relationships and calculate its diameter.

### Approach
Build the tree from the supplied relationships, then use subtree heights to determine the longest path.

### Complexity
- **Time:** O(n), assuming efficient tree construction and traversal
- **Auxiliary Space:** O(n)

---

## 17. BST Level Order Traversal

### Description
Insert values into a Binary Search Tree and print its nodes level by level.

### Approach
Construct the BST, then use a queue to perform Breadth-First Search.

### Complexity
- **Traversal:** O(n)
- **Construction:** O(n log n) on average, O(n²) in the worst case for ordinary unbalanced BST insertion
- **Auxiliary Space:** O(n)

---

## 18. Construct Tree from Inorder and Preorder

### Description
Construct a binary tree using its inorder and preorder traversal sequences.

### Approach
1. Use preorder to identify the current root.
2. Locate the root in inorder.
3. Divide inorder into left and right subtree ranges.
4. Recursively construct both subtrees.

An index map can provide efficient root lookup when node values are unique.

### Complexity
- **Time:** O(n) with an index map and unique node values
- **Auxiliary Space:** O(n)

---

## 19. Symmetric Binary Tree

### Description
Determine whether a binary tree is symmetric around its center.

A tree is symmetric when its left subtree is the mirror image of its right subtree.

### Approach
Use a recursive helper function to compare two nodes:

1. If both nodes are NULL, return `true`.
2. If only one node is NULL, return `false`.
3. If their values differ, return `false`.
4. Compare the left child of the first node with the right child of the second.
5. Compare the right child of the first node with the left child of the second.

### Example

Symmetric tree:

```text
        1
       / \
      2   2
     / \ / \
    3  4 4  3
```

Output:
```text
1
```

Non-symmetric tree:

```text
        1
       / \
      2   2
       \   \
        3   3
```

Output:
```text
0
```

### Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h) for recursion in the balanced case; O(n) in the worst case

---

## 🧠 Complexity Summary

| Notation | Meaning |
|---|---|
| `n` | Number of nodes |
| `h` | Height of the tree |
| `w` | Maximum width of the tree |
| O(1) | Constant time |
| O(log n) | Logarithmic time |
| O(n) | Linear time |
| O(h) | Space proportional to tree height |

---

## 🛠️ Technologies Used

- **Language:** C++
- **Core Concepts:** Binary Trees, Binary Search Trees, Recursion
- **Data Structures:** Queue, Vector, Map, Hash Map
- **Algorithms:** DFS, BFS, Tree Construction, Tree Traversal

---

## 🎯 Learning Goals

This collection is intended to strengthen understanding of tree data structures and prepare for DSA assessments and technical interviews.

Topics progress from basic tree construction and traversal to more advanced problems involving tree views, recursion, BST operations, and structural comparisons.

---

**Language:** C++  
**Repository:** DSA Practice  
**Focus:** Data Structures and Algorithms

### 20. Kth Smallest Element in a BST

* **File:** `20_Kth_Smallest_Element_in_BST.cpp`
* **Language:** C++
* **Concepts:** Binary Search Tree, Inorder Traversal, Recursion
* **Approach:** Perform inorder traversal and count the visited nodes. Stop when the kth node is reached.
* **Time Complexity:** O(n) worst case; traversal may stop earlier after finding the kth element.
* **Auxiliary Space Complexity:** O(h) for the recursive traversal stack.
* **Input:** Number of nodes, node values, and `k`.
* **Output:** The kth smallest element, or `-1` if `k` is invalid.


### 21. Maximum Path Sum in a Binary Tree

* **File:** `21_Maximum_Path_Sum_in_Binary_Tree.cpp`
* **Language:** C++
* **Concepts:** Binary Tree, Recursion, Tree Dynamic Programming
* **Approach:** Recursively calculate the maximum extendable path from each subtree. Update the global answer using the current node and its positive left and right contributions.
* **Time Complexity:** O(n)
* **Auxiliary Space Complexity:** O(h), where h is the height of the tree.
* **Output:** The maximum sum of a path between any two nodes. The path may start and end at any nodes.



### 22. Sum of All Subtrees

* **File:** `22_Sum_of_All_Subtrees.cpp`
* **Language:** C++
* **Concepts:** Binary Tree, Recursion, Postorder Traversal
* **Approach:** Recursively calculate the sums of the left and right subtrees, update the current node with its original value plus both subtree sums, and return the updated sum.
* **Time Complexity:** O(n)
* **Auxiliary Space Complexity:** O(h), where h is the height of the tree.
* **Example Output:** `15`
### 23. Maximum Width of Binary Tree

* **File:** `23_Maximum_Width_of_Binary_Tree.cpp`
* **Language:** C++
* **Concepts:** Binary Tree, Level Order Traversal, BFS, Queue, Indexing
* **Approach:** Perform level-order traversal while assigning positional indices to nodes. Calculate each level's width from the first and last positional indices.
* **Time Complexity:** O(n)
* **Auxiliary Space Complexity:** O(n)
* **Output:** Maximum width of the binary tree, including gaps between nodes.
