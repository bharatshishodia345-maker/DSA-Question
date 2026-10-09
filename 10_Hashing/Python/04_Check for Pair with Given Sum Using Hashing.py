def has_pair_with_sum(arr, target):
    seen = set()

    for value in arr:
        need = target - value

        if need in seen:
            return True

        seen.add(value)

    return False


target = 17
arr = [10, 15, 3, 7, 8, 5]

if has_pair_with_sum(arr, target):
    print("Yes")
else:
    print("No")