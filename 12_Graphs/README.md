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
