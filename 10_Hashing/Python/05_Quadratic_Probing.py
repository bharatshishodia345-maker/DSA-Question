n, m = map(int, input().split())
if n > 0:
    arr = list(map(int, input().split()))
else:
    arr = []
    table = [-1] * m
    for key in arr:
        oringnal = key % m
        inserted = False
        for i in range(m):
            index = (oringnal + i * i) % m
            if table[index] == -1:
                table[index] = key
                inserted = True
                break
            if not inserted:
                print(f"Hash table is full. Cannot insert records from key {key}")
            break
        if n == 0:
            print("Hash Table is empty")
        else:
            for i in range(m):
                print(f"T[{i}] -> {table[i]}")
