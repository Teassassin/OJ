def get_peach(n):
    if n <= 1:
        return 1
    return (get_peach(n - 1) + 1) * 2

n = int(input())
print(get_peach(n))
