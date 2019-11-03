a, b, c = map(int, input().split(' '))

for i in range(1, 101):
    if i%3 == a and i%4 == b and i%7 == c:
        print(i, end=';')