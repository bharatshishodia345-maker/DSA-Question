# Linear Search 

def linear_search(arr,item):
    for i in range(len(arr)):
        if arr[i] == item:
            return i
    
    return -1

arr = [10,50,60,70,80,90,55,40,66]

print(linear_search(arr,10))