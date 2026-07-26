# Celebrity Problem

## 📌 Problem

Given a group of people represented using a matrix, find the person who is a celebrity.

A celebrity is a person who:

- Knows nobody.
- Is known by everybody else.

## 🧠 Approach

The problem is solved using a Stack.

1. Push all people into the stack.
2. Take two people from the stack.
3. Compare whether one person knows the other.
4. Eliminate the person who cannot be a celebrity.
5. Continue until only one candidate remains.
6. Verify the final candidate.

## 💻 Concepts Used

- Stack
- Matrix
- 2D List
- Push and Pop
- Candidate elimination
- Verification

## ⏱️ Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## 🛠️ Language

Python 3

## 🎯 Learning Outcome

Learned how Stack can be used to solve a real-world elimination problem efficiently.