def contains_duplicate_within_k(arr, k):
    last = {}

    for i, value in enumerate(arr):
        if value in last and i - last[value] <= k:
            return True

        last[value] = i

    return False


n = 6
arr = [1, 2, 3, 1, 4, 5]
k = 3

result = contains_duplicate_within_k(arr, k)
print(result)