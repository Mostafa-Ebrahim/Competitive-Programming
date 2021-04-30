n = int(input())
x = []

for i in range (n):
    m = int(input())
    x.append(m)

for j in range(n):
    if 360 % (180-x[j]) == 0:
        print("YES")
    else:
        print("NO")