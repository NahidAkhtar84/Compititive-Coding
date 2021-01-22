#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr.sort()
    mini =0
    maxi =0
    for i in range(1, len(arr)):
        maxi += arr[i]
        
    for j in range(0, len(arr)-1):
        mini += arr[j]
    print("{} {}".format(mini, maxi))   

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

