import math
a=5
t=12
SB=math.sqrt((a*a)+(t*t))
k=a+t+SB
l=(a*t)/2
print("Diketahui :")
print("Alas = {} cm".format(a))
print("Tinggi = {} cm\n".format(t))
print("Jawab :")
print("Sisi A = {} cm".format(t))
print("Sisi B = {} cm".format(round(SB)))
print("Sisi C = {} cm".format(a))
print("Keliling = {} cm".format(round(k)))
print("Luas = {} cm".format(round(l)))
