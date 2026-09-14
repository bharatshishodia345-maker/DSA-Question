## 01. Factorial Using Recursion

### Problem Statement

Given a non-negative integer `n`, calculate its factorial using recursion.

Factorial of `n` is:

`n! = n × (n-1) × ... × 1`

### Approach

The function calls itself with `n - 1` until the base case `n == 0` is reached.

```cpp
fact(n) = n * fact(n - 1)