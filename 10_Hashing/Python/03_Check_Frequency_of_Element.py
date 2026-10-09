def first_non_repeating_elements(arr):
    freq = {}
    order = []

    for value in arr:
        if value in freq:
            freq[value] += 1
        else:
            freq[value] = 1
            order.append(value)

    for value in order:
        if freq[value] == 1:
            print(f"{value}:{freq[value]}")


arr = [2, 3, 2, 6, 5, 6, 2, 6, 7, 4, 2, 6]

first_non_repeating_elements(arr)