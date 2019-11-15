n, m = map(int, input().split(' '))
while (n or m):
    l = list(map(int, input().split()))
    l.append(m)
    l.sort()
    print(*l)
    n, m = map(int, input().split(' '))