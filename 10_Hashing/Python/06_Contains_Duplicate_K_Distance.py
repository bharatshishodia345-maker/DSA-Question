n = int(input())
arr = list(map(int, input().split()))
K = int(input())

seen = {}

for i in range(n):
    if arr[i] in seen and i - seen[arr[i]] <= K:
        print("True")
        break

    seen[arr[i]] = i
else:
    print("False")