# Basic Mathematics - C++

This folder contains basic mathematical and number-theory problems implemented in C++.

## Problems

| # | Problem | Technique | Time | Space |
|---|---|---|---|---|
| 01 | Prime Number | Trial Division | O(√n) | O(1) |
| 02 | GCD | Subtraction Method | O(max(a,b)) | O(1) |
| 03 | Count Prime Numbers | Sieve of Eratosthenes | O(n log log n) | O(n) |

---

## 01. Prime Number

### Problem Statement

Given an integer `n`, determine whether the number is a prime number.

A prime number is a number greater than `1` having exactly two factors:

- `1`
- The number itself

### Approach

- Numbers less than `2` are not prime.
- Check divisibility from `2` up to `√n`.
- If `n` is divisible by any number, it is not prime.
- Otherwise, it is prime.

### Complexity

- **Time:** O(√n)
- **Space:** O(1)

---

## 02. GCD - Greatest Common Divisor

### Problem Statement

Given two integers `l` and `r`, find their Greatest Common Divisor (GCD).

The GCD is the largest positive integer that divides both numbers exactly.

### Approach

This solution uses the **subtraction method**:

1. If one number is `0`, return the other number.
2. If `l > r`, subtract `r` from `l`.
3. Otherwise, subtract `l` from `r`.
4. Continue until both numbers become equal.
5. The final value is the GCD.

### Example

```text
Input:
12
18

Output:
The GCD value of L & N is 6