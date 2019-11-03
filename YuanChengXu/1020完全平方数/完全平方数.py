from math import sqrt
n = int(input())
count = 0
if n < 1000000:
    for i in range(0, n + 1):
        if sqrt(i + 100) % 1 == 0 and sqrt(i + 268) % 1 == 0:
            count += 1
print(count)
