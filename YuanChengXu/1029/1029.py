n = int(input())
sum = float(0)
C = []
if(n > 50):
    exit()
for i in range(0, n):
    if i == 0 or i == 1:
        C.append(i+2)
    else:
        C.append(C[i - 1] + C[i - 2])
    sum += float(C[i] / ((i + 1) * 2 + 1))
print("%.2f" % (sum), end='')
