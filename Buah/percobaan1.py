# soal: https://tlx.toki.id/problems/ksnp-2021/B1
def fpb(angka:list):
    angka.sort()
    besar = angka[-1]
    if angka[0] > 1:
        for i in range(2, besar+1):
            bisa = []
            for a in angka:
                if a % i == 0:
                    bisa.append(i)
            if len(bisa) == len(angka):
                return i
        else:
            return 1
    else:
        return 1

N, A, B = input().split()
N, A, B = int(N), int(A), int(B)

AN = A * N
BN = B * N

if AN > BN:
    print(AN - BN)
elif BN > AN:
    print(BN - AN)

