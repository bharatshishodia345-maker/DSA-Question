### 01. Graph Operations Using Adjacency List

**File:** `01_Graph_Operations.cpp`

**Language:** C++

**Concepts:** Graph, Adjacency List, Adjacency Matrix, Undirected Graph, STL Map and Set

**Description:**

This program implements an undirected graph using an adjacency list. It supports adding and removing vertices, adding and removing edges, checking whether an edge exists, and displaying the graph as an adjacency matrix.

**Operations:**

* Add a vertex.
* Remove a vertex and all its connected edges.
* Add an undirected edge.
* Remove an undirected edge.
* Check whether an edge exists.
* Print the adjacency matrix.

**Complexity:**

* Add vertex: approximately O(log V)
* Add edge: O(log V + log degree)
* Remove edge: O(log V + log degree)
* Check edge: O(log V + log degree)
* Print adjacency matrix: O(V²)

Here, V is the number of vertices. The exact operation costs depend on the `map` and `set` implementations and their operations.
### 02. Breadth First Search (BFS) Traversal

**File:** `02_BFS_Traversal.cpp`

**Language:** C++

**Concepts:** Graph, BFS, Queue, Adjacency Matrix, Level Order Traversal

**Description:**

This program implements Breadth First Search (BFS) to traverse an undirected graph level by level using an adjacency matrix.

**Approach:**

* Uses a queue to maintain the traversal order.
* Uses a visited array to avoid visiting nodes more than once.
* Explores all adjacent unvisited vertices.
* Prints each BFS level on a separate line.

**Complexity:**

* Time Complexity: O(V²)
* Space Complexity: O(V²), including the adjacency matrix.
* Auxiliary Space: O(V), for the queue and visited array.
### 03. Topological Sort using Kahn's Algorithm

- Implemented Topological Sorting using BFS.
- Used Indegree to identify nodes with no incoming edges.
- Used Min Heap to process the smallest available node first.
- Detected cycles in a directed graph.

**Time Complexity:** O(V log V + E)  
**Space Complexity:** O(V + E)

### 04. Bipartite Graph Check using BFS

- Implemented Bipartite Graph checking using BFS.
- Used two-coloring technique to divide vertices into two groups.
- Detected conflicts when adjacent vertices have the same color.
- Handled disconnected graph components.

**Time Complexity:** O(V²)  
**Space Complexity:** O(V²)