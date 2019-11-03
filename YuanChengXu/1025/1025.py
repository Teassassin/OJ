n = int(input())
if n <= 0 or n >= 1000:
    exit()
sum = 0
for i in range(1, n + 1):
    if(str(i) == str(i ** 2)[len(str(i ** 2)) - len(str(i)):]):
        sum += 1
print(sum)
