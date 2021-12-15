N = int(input())
number = [input() for i in range(N)] # int(input()) di ganti jadi input()
for n in number:
    print(int(n[::-1]))