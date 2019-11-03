def is_prime(i):
    for j in range(2, i):
            if i % j == 0:
                return False
    return True
sum = 0
n = int(input("Enter a number between 100 and 10000:"))
if 100 < n < 10000:
    for i in range(101, n + 1):
        if is_prime(i):
            sum += i
    print(sum)
