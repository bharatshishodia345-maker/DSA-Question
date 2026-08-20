# Sleep Sort
import time


def sleep_sort(arr):
    for i in range(len(arr)):
        time.sleep(arr[i])
        print(arr[i])
        
arr = [3,5,2,1]     
sleep_sort(arr)