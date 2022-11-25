I=0
while True:
    I=I+1
    i=int(input())
    hari=int(i/84600)
    jam=int((i/3600) % 24)
    menit=int((i/60) % 60)
    detik=int(i % 60)
    if(i<=3600):
        print("%.2d:%.2d:%.2d\n" %(jam,menit,detik))
    elif(i>=3600 and i<84600):
        print("%.2d:%.2d:%.2d\n" %(jam,menit,detik))
    elif(i>=84600):
        print("%d hari %.2d:%.2d:%.2d\n" %(hari,jam,menit,detik))
    if(I>4):
        break
