# Monkey Sort 


import time
import random

def is_sorted(arr):
    shorted = True
    for i in range(len(arr) - 1):
        if arr[i] > arr[i+1]:
            return False
    
    return shorted

def monkey_sort(arr):
    
    while not is_sorted(arr):
        time.sleep(1)
        random.shuffle(arr)
        print(arr)
    print(arr)
    
a = [5,6,8,2,3]
monkey_sort(a)