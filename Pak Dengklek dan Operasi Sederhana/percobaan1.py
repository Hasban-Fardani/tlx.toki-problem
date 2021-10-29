def hitung(x:int,y:int):
    print(x+y)
    print(x-y)
    print(x*y)
    print(x/y)
    print(x%y)

x, y = input().split()
x,y = int(x), int(y)
hitung(x, y)