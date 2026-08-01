# Check arr is sorted return true not sort return false

def is_sorted(arr):
    sorted = True
    for i in range(len(arr)):
        if arr[i] > arr[i+1]:
            return False
    
    return sorted

arr = [1,2,3,4,5,6,5,6,7]

print(is_sorted(arr))
