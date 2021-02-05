#!/bin/python3

import math
import os
import random
import re
import sys

def sumi(arr):
    summ=0
    for j in arr:
        summ += j
    return summ
# Complete the birthday function below.
def birthday(s, d, m):
    cnt =0
    for i in range(len(s)):
        x = s[i:i+m]
        p =sumi(x)
        if p == d:
            cnt +=1
    return cnt
        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    dm = input().rstrip().split()

    d = int(dm[0])

    m = int(dm[1])

    result = birthday(s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
