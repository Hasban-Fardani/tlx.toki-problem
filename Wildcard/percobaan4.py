kata = input()
n = int(input())
k_s = kata.replace("*", "")
index = kata.index("*")

b = []
for i in range(n):
    kata_lain = input()
    if k_s != "":
        if k_s in kata_lain:
            if index >= 0 and kata_lain[index:] != "":
                b.append(kata_lain)
            elif index == 0 and kata_lain[:index] != "":
                b.append(kata_lain)
    else:
        b.append(kata_lain)
    
[print(i) for i in b]

