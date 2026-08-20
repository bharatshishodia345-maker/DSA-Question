# Bubble sort

def bubble_sort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-1-i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                
    print(arr)
    

arr = [2,5,6,1,4,3]
bubble_sort(arr)