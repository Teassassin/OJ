try:
    while True:
        l = list(input())
        l.sort()
        print(*l)
except EOFError:
    pass