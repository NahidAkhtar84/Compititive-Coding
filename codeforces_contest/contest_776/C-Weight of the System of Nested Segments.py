#accepted

from math import *
from sys import stdin, setrecursionlimit
from collections import *
from itertools import *

setrecursionlimit(10**8)
# input = stdin.readline
lines = stdin.readlines()
lines.reverse()

def input():
    return lines.pop().strip("\n")
t = int(input())

while t:
    input()
    n, m = map(int, input().split())

    val_set = []
    for ind in range(m):
        x, w = map(int, input().split())
        val_set.append((x, w, ind))

    sorted_by_weigt = sorted(val_set, key=lambda x: x[1])
    subject_list = sorted_by_weigt[:2*n]
    sorted_by_index = sorted(subject_list, key=lambda x: x[0])

    composed_weight = 0
    ind_list = []
    for i in range(n):
        composed_weight += sorted_by_index[i][1] + sorted_by_index[2*n-i-1][1]
        ind_list.append((sorted_by_index[i][2]+1, sorted_by_index[2*n-i-1][2]+1))

    print(composed_weight)
    for il in ind_list:
        print(il[0],il[1])
    t -= 1



    