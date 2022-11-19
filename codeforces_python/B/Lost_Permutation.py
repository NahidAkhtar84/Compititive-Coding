############ ---- Input Functions ---- ############

#inp — For taking integer inputs.
def inp():
    return(int(input()))
#inlt — For taking List inputs.
def inlt():
    return(list(map(int,input().split())))
#  insr — For taking string inputs. Actually it returns a List of Characters, instead of a string, which is easier to use in Python, because in Python, Strings are Immutable.
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
#invr — For taking space seperated integer variable inputs.
def invr():
    return(map(int,input().split()))
    
# The input = sys.stdin.readline is actually for Faster Inputs, because line reading through System STDIN (Standard Input) is faster in Python.

t = inp()

for i in range(t):
    m, s = invr()
    l = inlt()
    
    l = sorted(l)
    rs = 0
    p = 1
    for i in range(len(l)):
        while l[i] != p:
            rs += p
            p += 1
        p = l[i]+1
    if rs > s:
        print("NO")
    elif rs == s:
        print("YES")
    else:
        for i in range(l[-1]+1, 101):
            rs += i
            if rs > s:
                print("NO")
                break
            if rs == s:
                print("YES")
                break
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    