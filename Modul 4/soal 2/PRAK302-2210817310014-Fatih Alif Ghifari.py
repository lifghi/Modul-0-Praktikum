i=0
while True:
    i=i+1
    nilai=int(input())
    if(nilai>=80):
        print("A\n")
    elif(70<=nilai<=79):
        print("B\n")
    elif(60<=nilai<=69):
        print("C\n")
    elif(50<=nilai<=59):
        print("D\n")
    elif(nilai<50):
        print("E\n")
    if(i>4):
        break
