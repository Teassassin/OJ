def Fibonacci(n):
    if n < 0:
        return 0
    if n == 0:
        return 7
    if n == 1:
        return 11
    return Fibonacci(n - 1) + Fibonacci(n - 2)

n = int(input())
if n >= 30:
    n = 29
if Fibonacci(n) % 3 == 0:
    print("yes")
else:
    print("no")