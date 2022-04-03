#Accepted

from math import *
from sys import stdin, setrecursionlimit
from itertools import *
from collections import *

setrecursionlimit(10**8)

lines = stdin.readlines()
lines.reverse()
def input():
    return lines.pop().strip("\n")

t = int(input())

while t:
    l, r, a = map(int, input().split())
    res = (r//a) + (r%a)
    val = r - (r%a) -1

    if l <= val <= r:
        res = max(res, (val//a)+(val%a))

    print(res)
    t -= 1
