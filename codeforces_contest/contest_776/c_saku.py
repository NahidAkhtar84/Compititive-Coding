import sys
input = sys.stdin.readline
from collections import deque
 
ANS = []
for i in range(int(input())):
  input()
  n, m = map(int, input().split())
  L = []
  for j in range(m):
    x, w = map(int, input().split())
    L.append((w, x, j))
  L.sort()
  L = L[:2 * n]
  L.sort(key=lambda x: x[1])
  L = deque(L)
  ans = []
  W = 0
  for j in range(n):
    w1, x1, i1 = L.popleft()
    w2, x2, i2 = L.pop()
    W += w1 + w2
    ans.append((i1, i2))
  
  ANS.append(W)
  for a, b in ans:
    ANS.append(f'{a + 1} {b + 1}')
  
 
print('\n'.join(map(str, ANS)))
