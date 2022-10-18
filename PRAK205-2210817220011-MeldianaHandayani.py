import math
A= int(input())
B=int(input())
Alas=round(math.sqrt(pow(B,2)-pow(A,2)))
Keliling= Alas+A+B
Luas= int(0.5* Alas*A)
print("Alas = {} cm".format (Alas))
print("Tinggi = {} cm".format(A))
print("Keliling = {} cm".format(Keliling))
print("Luas = {} cm^2".format (Luas))
