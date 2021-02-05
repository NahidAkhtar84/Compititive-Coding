#!/bin/python3

import math
import os
import random
import re
import sys
from math import gcd # Python versions 3.5 and above
from functools import reduce # Python version 3.x
#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def lcm(denominators):
    return reduce(lambda a,b: a*b // gcd(a,b), denominators)

def getTotalX(a, b):
    lcm_val = lcm(a)
    i = 1
    res = 0
    while lcm_val * i <= min(b):
        cnt = 0
        for j in b:
            if j % (lcm_val * i) == 0:
                cnt +=1
            if cnt == len(b):
                res +=1
        i +=1
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
