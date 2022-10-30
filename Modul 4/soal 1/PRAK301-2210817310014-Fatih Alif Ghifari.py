i=0
while True:
    i=i+1
    a,b=input().split()
    if(a<b):
        print(a,b,"\n")
    else:
        print(b,a,"\n")
    i=i+1
    if(i>4):
        break
