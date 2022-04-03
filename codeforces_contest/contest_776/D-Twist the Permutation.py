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
    n = int(input())
    subject_array = list(map(int, input().split(" ")))
    out_lst = []
    while n > 0:
        sub_ind = subject_array.index(n)
        out_lst = [(sub_ind+1)%n] + out_lst
        # We are doing to consider it a full cycle and start from the immediate next value
        subject_array = subject_array[sub_ind+1:] + subject_array[:sub_ind]
        n -= 1
    t -= 1
    print(*out_lst, sep=" ")

