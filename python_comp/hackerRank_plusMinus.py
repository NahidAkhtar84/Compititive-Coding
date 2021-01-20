#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    length = len(arr)
    pstv =0
    ngtv =0
    zero =0
    
    for i in arr:
        if i >0:
            pstv +=1
        elif i <0:
            ngtv +=1
        else:
            zero +=1
        
    a = round(pstv/length, 6)
    b = round(ngtv/length, 6)
    c = round(zero/length, 6)
    
    print(a)
    print(b)
    print(c)

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
