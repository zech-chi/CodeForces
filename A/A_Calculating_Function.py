def odd_sum(n):
    return (((n + 1) * (n + 1)) // 4)

def even_sum(n):
    return ((n * (n + 2)) // 4)


n = int(input())
n1 = n
n2 = n
if (n % 2):
    n1 -= 1
else:
    n2 -= 1
print(even_sum(n1) - odd_sum(n2))
