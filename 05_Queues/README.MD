# Queue Implementation in Python

This folder contains my step-by-step implementation of a **Queue Data Structure using Python and Linked List**.

## 📚 Topics Covered

1. Basic Queue Implementation
2. Enqueue Operation
3. Dequeue Operation
4. Check Queue Empty
5. Traverse Queue
6. Find Queue Size
7. Get Front Item
8. Get Rear Item

## 📂 Files

### `01_basic_queue.py`

Basic Queue implementation using a linked list.

Implemented operations:

* `enqueue()`
* `dequeue()`
* `is_empty()`
* `trevrase()`

Example:

```text
1 2 3 4
```

### `02_queue_with_size.py`

Extended the Queue implementation by adding:

* `size()`
* Improved `dequeue()`
* Proper `rear` handling when the queue becomes empty

Example:

```text
1 2 3 4
Size of queue 4
```

### `03_queue_with_front_rear.py`

Added methods to access the front and rear elements of the Queue.

Implemented:

* `front_item()`
* `rear_item()`

Example:

```text
1 2 3 4
Front Item 1
rear Item 4
```

## 🧠 Queue Concept

Queue follows the **FIFO (First In, First Out)** principle.

The element inserted first is removed first.

```text
Enqueue:

Front → 1 → 2 → 3 → 4 ← Rear

Dequeue:

1 is removed first
```

## ⏱️ Basic Complexity

| Operation | Complexity |
| --------- | ---------: |
| Enqueue   |       O(1) |
| Dequeue   |       O(1) |
| Front     |       O(1) |
| Rear      |       O(1) |
| Is Empty  |       O(1) |
| Size      |       O(n) |
| Traverse  |       O(n) |

> Note: In this implementation, `size()` traverses the linked list, so its complexity is O(n).

## 🎯 Learning Progress

This implementation is part of my **DSA with Python practice**, where I am building data structures from scratch to strengthen my understanding of how they work internally.
