vListCombine = []
outputList = []
vList = []
hList = []


def findCommonTags(a, b):
    a = a[3:]
    b = b[3:]
    return list(set(a) & set(b))

def sortThePics(a, b):

    v = a + b
    v.sort(key=len, reverse=True)
    for index in v:
        if index[1] == 'H':
            outputList.append(index[0])
        elif index[0] == 'V':
            outputList.append((index[1], index[2]))








def findMostCommonTags(c):
    indx1 = 0
    indx2 = -1
    while indx1 < len(c):
        max_so_far = 0
        union = ['V']
        for k in range(indx1 + 1, len(c)):
            com = findCommonTags(c[indx1], c[k])
            if len(com) > max_so_far:
                max_so_far = len(com)
                indx2 = k

        if max_so_far == 0:
            indx1 += 1
        else:
            union.append(c[indx1][0])
            union.append(c[indx2][0])
            union += list(set().union(c[indx1][3:], c[indx2][3:]))
            vListCombine.append(union)
            c.pop(indx1)
            c.pop(indx2-1)
    indx1 = 0
    while len(c) != 0:
        max_so_far = 0
        union = ['V']
        if max_so_far == 0:
            indx2 = len(c) - 1
            union.append(c[indx1][0])
            union.append(c[indx2][0])
            union += list(set().union(c[indx1][3:], c[indx2][3:]))

        vListCombine.append(union)
        c.pop(indx1)
        if len(c) != 0:
            c.pop(indx2-1)


n = input()
n = int(n)
for i in range(n):
    inputElem = input()
    inputElem = str(i) + " " + inputElem
    inputElem = inputElem.split()
    if inputElem[1] == 'H':
        hList.append(inputElem)
    else:
        vList.append(inputElem)
findMostCommonTags(vList)

sortThePics(hList, vListCombine)
print(len(outputList))
for elem in outputList:
    if type(elem) == tuple:
        print(elem[0], elem[1])
    else:
        print(elem)
