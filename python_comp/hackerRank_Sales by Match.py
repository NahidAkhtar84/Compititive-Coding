#!/bin/python3

import math
import os
import random
import re
import sys
import math

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    val ={}
    val_lst = []
    res =0
    for a in range(len(ar)-1):
        val = {i: ar.count(i) for i in ar}
        val_lst = list(val.values())
    for j in val_lst:
          res += math.floor(j/2) 
    return res
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
