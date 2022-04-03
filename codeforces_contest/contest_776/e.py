def move(L,i):
    global d
    if i<0: return 0
    LL = [L[j] for j in range(len(L)) if j!=i]
    u = getu(LL)
    maxu = max([x[0] for x in u])
    minu = min([x[0] for x in u])
    return min(minu,max(d-LL[-1]-1,(maxu-1)//2))
    
def getu(L):
    n = len(L)
    u = [(L[0]-1,-1)]
    for i in range(n-1):
        u.append((L[i+1]-L[i]-1,i))
    return u
 
def solv(L):
    u = getu(L)
    u.sort(key=lambda x:x[0])
    i = u[0][1]
    return max(move(L,i),move(L,i+1))
 
for _ in range(int(input())):
    input()
    n,d = map(int,input().split())
    L = list(map(int,input().split()))
    print(solv(L))