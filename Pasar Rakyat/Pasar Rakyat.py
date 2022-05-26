jumlah = int(input())
depan = int(input())
belakang = kpk = 0
for i in range(jumlah-1):
    n = int(input())
    belakang = n
    k = depan * belakang
    while belakang:
        depan, belakang = belakang, depan % belakang
    kpk = k / depan
    depan = n
print(kpk)