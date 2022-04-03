#!/usr/bin/env python3
 
import sys
from typing import Any, Dict, List
 
INIT = -1
 
n: int
a: List[int]
b: List[int]
 
def getline() -> str:
  return sys.stdin.readline().rstrip("\r\n")
 
 
def printf(fmt: str, *args: Any) -> None:
  sys.stdout.write(fmt % args)
 
 
def reverse(i: int, j: int) -> None:
  """ [i,j) """
  j -= 1
  while i < j:
    t = a[i]
    a[i] = a[j]
    a[j] = t
    i += 1
    j -= 1
  
 
def rotate(l: int, p: int) -> None:
  reverse(0, p)
  reverse(p, l)
  reverse(0, l)
  
 
def main() -> None:
  global n, a, b
  tc = int(getline())
  for _ in range(tc):
    n = int(getline())
    a = list(map(int, input().split(' ')))
    
    ans: List[int] = [0] * n
    for i in range(n - 1, 0, -1):
      p = a.index(i + 1)
      if p == i:
        continue
      
      rotate(i + 1, p + 1)
      ans[i] += p + 1
 
    print(*ans, sep=' ')
 
 
if __name__ == '__main__':
  main()
