#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    b = bin(n)
    s = str(b)
    res = s[2:]
    cnt =0
    qc=0
    for i in res:
        if i == '1':
            cnt +=1
        else:
            cnt =0
        if cnt >qc:
            qc = cnt
    print(qc)