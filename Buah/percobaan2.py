from math import gcd

N, A, B = [int(i) for i in input().split()]
fpb = gcd(A, B)
print(B//fpb + B//fpb)