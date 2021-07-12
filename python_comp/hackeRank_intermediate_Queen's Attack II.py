#!/bin/python3

import math
import os
import random
import re
import sys

def queensAttack(n, k, r_q, c_q, obstacles):
    # Write your code here
    if n ==0:
        return 0
    obs_set = set([tuple(item) for item in obstacles])
    
    if (r_q, c_q) in obs_set:
        return 0
    
    directions = [(1,0), (-1,0), (0,1), (0,-1), (1,1), (-1,-1), (1,-1), (-1,1)]
    
    count =0
    for x, y in directions:
        qpos = (r_q+x, c_q+y)
        while 1<=qpos[0]<=n and 1<=qpos[1]<=n and qpos not in obs_set:
            qpos = (qpos[0]+x, qpos[1]+y)
            count +=1
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    r_q = int(second_multiple_input[0])

    c_q = int(second_multiple_input[1])

    obstacles = []

    for _ in range(k):
        obstacles.append(list(map(int, input().rstrip().split())))

    result = queensAttack(n, k, r_q, c_q, obstacles)

    fptr.write(str(result) + '\n')

    fptr.close()
