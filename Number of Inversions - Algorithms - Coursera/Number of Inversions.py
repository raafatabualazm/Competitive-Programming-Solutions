# python 3
def enhancedMerge(arr):
    if len(arr) <= 1:
        return arr, 0
    M = int(len(arr)/2)
    a, inv1 = enhancedMerge(arr[:M])
    b, inv2 = enhancedMerge(arr[M:])
    i = 0
    j = 0
    c = []
    inv3 = inv1 + inv2
    while i < len(a) and j < len(b):
        if a[i] <= b[j]:
            c.append(a[i])
            i += 1
        elif a[i] > b[j]:
            c.append(b[j])
            j += 1
            inv3 += (len(a) - i)

    c += a[i:]
    c += b[j:]
    return c, inv3


fh = open("IntegerArray.txt")
arr = []

for elem in fh:
    arr.append(int(elem))
arrSorted, invcount = enhancedMerge(arr)
print(invcount)