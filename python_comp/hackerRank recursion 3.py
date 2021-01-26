#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the factorial function below.
def factorial(n):
    if n < 2:
        return 1
    else:
        res=1
        for i in range(n, 1, -1):
            res *= i
        return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = factorial(n)

    fptr.write(str(result) + '\n')

    fptr.close()
