kata = input()
kata_lain = []

banyak = int(input())
for i in range(banyak):
    kata_lain.append(input())
    
if "*" in kata:
    i = kata.index("*")
    if kata[0:i] == "":
        for k in kata_lain:
            print(k)
    else:
        for k in kata_lain:
            if k[0:i] == kata[0:i]:
                print(k)