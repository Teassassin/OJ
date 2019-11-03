a, n = input().split()
n = int(n)
sum = 0
for i in range(1, n + 1):
    sum += int(a * i)
print(sum)
