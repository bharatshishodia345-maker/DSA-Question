arr = list(map(int, input().split(",")))

# Sorting approach:
# arr.sort()
# for i in range(len(arr)):
#     if i != arr[i]:
#         print(i)
#         break

n = len(arr)
ans = n

for i in range(n):
    ans ^= i
    ans ^= arr[i]

print(ans)