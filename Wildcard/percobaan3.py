kata = input()
n = int(input())
kata_lain = [input() for i in range(n)]
k_s = kata.replace("*", "")

for kl in kata_lain:
    if k_s in kl:
        print(kl)
        


