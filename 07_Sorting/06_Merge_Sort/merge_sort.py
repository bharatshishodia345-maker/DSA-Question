# merge sort6

def merge_sorted(arr1, arr2, arr):
    
    i = j=k = 0
    
    
    while i < len(arr1) and j < len(arr2):
        
        if arr1[i] < arr2[j]:
            arr[k] = arr1[i]
            i +=1
            k +=1
            
        else:
            arr[k] = arr2[j]
            j +=1
            k +=1
        
            
    while i < len(arr1):
        arr[k] = arr1[i]
        i +=1
        k +=1
        
        
    while j < len(arr2):
        arr[k] = arr2[j]
        j +=1
        k +=1
        
    return 

def merge_sort(arr):
    if len(arr) == 1:
        return arr
    
    mid = len(arr)//2
    
    left =  arr[:mid]
    right = arr[mid:]
    
    merge_sort(left)
    merge_sort(right)
    
    merge_sorted(left,right,arr)

arr = [1,5,2,6,3,9,7]

merge_sort(arr)
print(arr)

