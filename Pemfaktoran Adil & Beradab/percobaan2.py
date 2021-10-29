# soal : https://tlx.toki.id/problems/troc-23/A

def faktor(angka:int):
    faktor = []
    if angka > 0:
        for i in range(1, angka+1):
            if angka % i == 0:
                faktor.append(i)
    return faktor

N = int(input())
if N >= 1 and N <= 100:
    if len(faktor(N)) == 5:
        print("YES")
    else:
        print("NO")