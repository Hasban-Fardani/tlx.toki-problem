N = int(input())
number = [input() for i in range(N)] # int(input()) -> input()
for n in number:
    print(int(n[::-1]))