vListCombine = []
outputList = []
vList = []
hList = []


def findCommonTags(a, b):
    a = a[3:]
    b = b[3:]
    return list(set(a) & set(b))

def sortThePics(a, b):
    x = 0
    v = a + b
    for elem in v:
        elem[3:] = sorted(elem[3:])

    v.sort(key=lambda x: (x[3:]))
    while len(v) > 1:
        x += 1
        max_so_far = -1
        for it in range(1, len(v)):

            x1 = len(set(v[0][3:]) & set(v[it][3:]))
            x2 = len(set(v[0][3:]) - set(v[it][3:]))
            x3 = len(set(v[it][3:]) - set(v[0][3:]))
            score = min(x1, x2, x3)
            if score > max_so_far:
                max_so_far = score
                index = it

        if v[0][1] == 'H':
            outputList.append(v[0][0])
        elif v[0][0] == 'V':
            outputList.append((v[0][1], v[0][2]))

        if v[index][1] == 'H':
            outputList.append(v[index][0])
        elif v[index][0] == 'V':
            outputList.append((v[index][1], v[index][2]))

        v.pop(0)
        v.pop(index-1)
    if len(v) == 1:
        if v[0][1] == 'H':
            outputList.append(v[0][0])
        elif v[0][0] == 'V':
            outputList.append((v[0][1], v[0][2]))
    return x







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
for elem in vListCombine:
    print(elem)
# x = sortThePics(hList, vListCombine)
# print(len(outputList))
# for elem in outputList:
#    if type(elem) == tuple:
#        print(elem[0], elem[1])
#    else:
#        print(elem)

