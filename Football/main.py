from statistics import mode
n = int(input())
x = []
for i in range(n):
    a = str(input())
    x.append(a)

mx = mode(x)
print(mx)

# docs: https://docs.python.org/3/library/statistics.html#module-statistics
