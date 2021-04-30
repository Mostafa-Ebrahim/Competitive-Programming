n, k = map(int, input().split())
x = []

for i in range(1, n // 2):
    x.append(i)

for j in range(n // 2, n+1):
    x.append(j)

print(x[k])