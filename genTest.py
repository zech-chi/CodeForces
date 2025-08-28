import random

t = 1

print(t)

for i in range(t):
    n = 8
    print(n)
    l = [i for i in range(n)]
    random.shuffle(l)
    print(" ".join(map(str, l)))