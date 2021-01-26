# Enter your code here. Read input from STDIN. Print output to STDOUT

#!/bin/python3

import math
import os
import random
import re
import sys

def check(d, key):
    if key in d.keys():
        print("{}={}".format(key,d[key]))
    else:
        print("Not found")

if __name__ == '__main__':
    n = int(input())
    d = dict(input().split() for _ in range(n))
    
    try:
        while(1):
            txt = str(input())
            check(d, txt)
    except(EOFError):
        pass
        
        
        
