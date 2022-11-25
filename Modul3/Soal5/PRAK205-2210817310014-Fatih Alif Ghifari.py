import math
a,b = input(). split()
a = int(a)
b = int(b)
c = math.sqrt(pow(b,2)-pow(a,2))
k = a+b+c
l = 0.5*c*a
print("Alas = %d" %c)
print("Tinggi = %d" %a)
print("Keliling = %d" %k)
print("Luas = %dcm^2\n" %l)

a1 = int(input())
b1 = int(input())
c1 = math.sqrt(pow(b1,2)-pow(a1,2))
k1 = a1+b1+c1
l1 = 0.5*c1*a1
print("Alas = %d" %c1)
print("Tinggi = %d" %a1)
print("Keliling = %d" %k1)
print("Luas = %dcm^2" %l1)