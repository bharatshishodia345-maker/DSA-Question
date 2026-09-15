## 01. Factorial Using Recursion

### Problem Statement

Given a non-negative integer `n`, calculate its factorial using recursion.

Factorial of `n` is:

`n! = n × (n-1) × ... × 1`

### Approach

The function calls itself with `n - 1` until the base case `n == 0` is reached.

```cpp
fact(n) = n * fact(n - 1)


## 02. Power of a Number

### Problem Statement

Given a number `n` and an integer power `m`, calculate `n^m` using recursion.

### Approach

Use the recursive relation:

`power(n, m) = n × power(n, m-1)`

Base case:

`power(n, 0) = 1`

### Example

```text
Input:
2
5

Output:
32