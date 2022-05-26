import re

kata = input()
n = int(input())
kata_lain = [input() for i in range(n)]

for kl in kata_lain:
    if re.search(kata, kl):
        print(kl)