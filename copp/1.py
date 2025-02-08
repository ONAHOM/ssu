a, b = map(int, input().split())
arr = list(map(int, input().split()))
max_arr = []
min_arr = []
arr1 = arr.copy()
arr2 = arr.copy()
for i in range(b):
        max_arr.append(max(arr1))
        arr1.remove(max_arr[i])
for i in range(b):
        min_arr.append(min(arr2))
        arr2.remove(min_arr[i])
print(sum(max_arr) - sum(min_arr))

