def kpk(angka:list):
    kelipatan = []
    kpk = None
    while kpk == None:
        d = 1
        s = 100
        for a in angka:
            for i in range(d, s):
                kelipatan.append(a * i)
        for i in kelipatan:
            b = []
            for a in angka:
                if i % a == 0:
                    b.append(a)
            if len(b) == len(angka):
                kpk = i
                break
            else:
                kelipatan = []
                d = s
                s += 100
    return kpk

if __name__ == "__main__":
    jumlah = int(input())
    frekuensi = []
    for i in range(jumlah):
        frekuensi.append(int(input()))
    print(kpk(frekuensi))
