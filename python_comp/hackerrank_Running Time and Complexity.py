# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

def isPrime(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x%i ==0:
            return False
    return True

n = int(input())
for i in range(n):
    x = int(input())
    if x < 2:
        print("Not prime")
    else:
        res = isPrime(x)
        if res == False:
            print("Not prime")
        else:
            print("Prime")