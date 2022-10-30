i=0
while True:
    i=i+1
    nilai=int(input())
    if(nilai>=1 and nilai<=9):
        print("Satuan\n")
    elif(nilai==0):
        print("Nol\n")
    elif(nilai>=99):
        print("Anda Menginput Melebihi Limit Bilangan\n")
    elif(nilai>=20 and nilai<=99):
        print("Puluhan\n")
    else:
        print("Belasan")
    if(i>4):
        break
