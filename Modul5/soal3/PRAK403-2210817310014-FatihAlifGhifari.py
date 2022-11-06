a, b = input().split()
i = int(a) ; j = int(b)
if a > b :
    while i >= int(b) and j <= int(a) :
        print(i, end=' ') ; print(j, end=' ')
        i -= 1 ; j += 1
        if i == int(b) - 1 : break
        else : print("-", end=' ')
if a < b :
    while i <= int(b) and j >= int(a) :
        print(i, end=' ') ; print(j, end=' ')
        i += 1 ; j -= 1
        if j == int(a) - 1 : break
        else : print("-", end=' ')