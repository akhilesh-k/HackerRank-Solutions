a, b, n = (int(i) for i in raw_input().split())
if n == 1: print(a)
elif n == 2: print(b)
else:
    for x in range(2, n):
        tn = a + b*b
        a = b
        b = tn
    print(tn)
