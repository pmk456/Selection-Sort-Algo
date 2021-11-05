def selection_sort(arr):
    for i in range(len(arr)):
        min = i
        for j in range(i+1, len(arr)):
            if arr[min] > arr[j]: min = j
        arr[i], arr[min] = arr[min], arr[i]
       
if __name__ == "__main__":
    array = [12, 10, 9, 8, 6, 5, 4, 3, 2, 1]
    print("Array Before Sorting: ", end="")
    print(array)
    selection_sort(array)
    print("Array After Soring: ", end="")
    print(array)
