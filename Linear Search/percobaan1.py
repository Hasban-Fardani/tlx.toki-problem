# https://tlx.toki.id/problems/impl-search/A

input_usr = input()
N, D = input_usr.split()
N, D = int(N), int(D)
if N <= 1 and N <= 10**6 and D <= 10**5:
    data = []
    for i in range(N):
        data.append(int(input()))
    if D in data:
        print(data.index(D))
    else:
        print(-1)