import math
import os
import random
import re
import sys

def extraLongFactorials(n):
    # Write your code here
    res = 1
    while n > 1:
        res *= n
        n= n-1
    return res

if __name__ == '__main__':
    n = int(input().strip())

    print(extraLongFactorials(n))
