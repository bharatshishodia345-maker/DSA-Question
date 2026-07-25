# Undo and Redo Text Editor Using Stack

## Problem

Implement a simple text editor that supports **Undo** and **Redo** operations using Stack.

## Approach

Two stacks are used:

- Undo Stack
- Redo Stack

### Undo

When an undo operation is performed:

```text
Undo Stack → Redo Stack

e top element is removed from the Undo Stack and pushed into the Redo Stack.

Redo

When a redo operation is performed:

Redo Stack → Undo Stack

The top element is removed from the Redo Stack and pushed back into the Undo Stack.

Example

Input:

Text: Bharat
Pattern: uuur

Operations:

u → remove last character
u → remove another character
u → remove another character
r → restore last removed character
Concepts Used
Stack
LIFO
Push
Pop
Undo
Redo
Linked List
Time Complexity

For a text of length n and operation pattern of length m:

O(n + m)
Space Complexity
O(n)

---

## ⚠️ Ek important improvement

Tumhare original code me:

```python
res = ''

for loop ke andar tha:

for i in pattern:
    ...
    res = ''

Isko loop ke bahar rakhna better hai:

for i in pattern:
    ...

res = ''
while not self.u.isempty():
    ...