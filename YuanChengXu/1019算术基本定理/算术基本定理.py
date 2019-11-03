def out_list(n):
    outlist = []
    m = n
    for i in range(2, m):
        while n % i == 0:
            n /= i
            outlist.append(i)
    return outlist

def is_prime(n):
    for i in range(2, n):
            if n % i == 0:
                return True
    return False

n = int(input())
if is_prime(n):
    outlist = out_list(n)
    outlist.sort()
    print(*outlist, sep = '*')
