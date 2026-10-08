table = [[] for _ in range(10)]

n = int(input())
arr = list(map(int, input().split()))

# Initial insertion
for key in arr:
    index = key % 10
    table[index].insert(0, key)

q = int(input())

for _ in range(q):
    operation, key = map(int, input().split())

    index = key % 10

    if operation == 1:
        # Insert
        table[index].insert(0, key)

    elif operation == 2:
        # Delete
        if key in table[index]:
            table[index].remove(key)

    elif operation == 3:
        # Search
        if key in table[index]:
            print("Found")
        else:
            print("Not Found")

# Print final hash table
for i in range(10):
    print("Bucket[" + str(i) + "]:", *table[i])