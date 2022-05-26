N = int(input())
A = input().split()
B = input().split()

A = [int(i) for i in A]
B = [int(i) for i in B]
p = []

for a,b in list(zip(A, B)):
    if a == b:
        p.append(a)
        
print(A.index(p[-1]))