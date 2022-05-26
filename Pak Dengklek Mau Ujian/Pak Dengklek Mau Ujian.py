def cek(N:int):
    if N >= 0 and N <= 100:
        return "YA"
    else:
        return "TIDAK"

print(cek(int(input())))