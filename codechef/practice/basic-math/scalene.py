t = int(input())

while t > 0:
    a, b, c = map(int, input().split())
    if (a not in (b, c) and b not in (a, c) and c not in (a, b)):
        print("YES")
    else:
        print("NO")
    t -= 1
