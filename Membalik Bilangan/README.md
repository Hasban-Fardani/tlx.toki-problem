url: https://tlx.toki.id/problems/toki-exercise-1/P01

2 kali percobaan, di percobaan pertama sudah berhasil. Percobaan ke-2 hanya mempersingkat kode.

percobaan1:
    
```python
N = int(input())
number = [int(input()) for i in range(N)]
for n in number:
    print(int(str(n)[::-1]))
```

percobaan2:
    
```python
N = int(input())
number = [input() for i in range(N)] # int(input()) -> input()
for n in number:
    print(int(n[::-1]))
```