#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    arr.sort()
    cnt =0
    res =0
    po =0
    for i in range(1, len(arr)):
        if arr[i] == arr[i-1]:
            cnt +=1
        else:
            cnt=0
        if cnt > res:
            po = arr[i]
            res = cnt
    return po

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
