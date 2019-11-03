p, n = 0, 0
while True:
    tmp = int(input())
    if tmp == 0:
        break
    elif tmp < 0:
        n += 1
    else:
        p += 1
print(p, n)