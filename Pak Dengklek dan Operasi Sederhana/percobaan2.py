I = input().split()
x, y = int(I[0]), int(I[1])
if x >= 1 and y >= 1 and x <= 100 and y <= 100:
    print(x + y)
    print(x - y)
    print(x * y)
    print(x / y)
    print(x % y)