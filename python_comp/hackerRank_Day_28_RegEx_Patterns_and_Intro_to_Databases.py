
import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(input().strip())
    res =[]
    for N_itr in range(N):
        first_multiple_input = input().rstrip().split()

        firstName = first_multiple_input[0]

        emailID = first_multiple_input[1]

        pattern = re.compile(r'[a-z]+@+gmail+\.+com')
        match = pattern.findall(emailID)
        if match:
            res.append(firstName)
            
    res.sort()
    for i in res:
        print(i)
            