camp = 0
recur = 0

def partition(arr,low,high):
	global camp

	pivot = arr[high]
	i = low - 1

	for j in range(low,high):
		camp +=1

		if arr[j]<pivot:
			i+=1
			arr[i],arr[j] = arr[j],arr[i]
	arr[i + 1], arr[high] = arr[high], arr[i + 1]

	return i + 1

def quickSort(arr,low,high):
	global recur
	if low < high:
		recur += 1
		pi = partition(arr,low,high)
		quickSort(arr,low,pi-1)
		quickSort(arr,pi + 1, high)

n= int(input())

arr= list(map(int,input().split()))

quickSort(arr,0,n-1)

print(" ".join(map(str,arr))+" ")
print(camp)
print(recur)