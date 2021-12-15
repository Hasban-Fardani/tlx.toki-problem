N = int(input())
number = [int(input()) for i in range(N)]
for n in number:
    print(int(str(n)[::-1]))