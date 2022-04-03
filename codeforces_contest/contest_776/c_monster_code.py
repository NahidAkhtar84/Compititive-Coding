import bisect
import itertools
import heapq
import collections
import math
import sys
 
 
input = sys.stdin.readline
 
 
############ ---- Input Functions ---- ############
def inp():
    return (int(input()))
 
 
def inlt():
    return (list(map(int, input().split())))
 
 
def insr():
    s = input()
    return (list(s[:len(s) - 1]))
 
 
def invr():
    return (map(int, input().split()))
 
 
def inis():
    return (input().split())
 
 
def stlt():
    return list(map(str, input().split()))
 
 
###################################################
 
# # Code to find top 3 elements and their counts
# # using most_common
#
# arr = [1, 3, 4, 1, 2, 1, 1, 3, 4, 3, 5, 1, 2, 5, 3, 4, 5]
# counter = Counter(arr)
# top_three = counter.most_common()
# print(sorted(top_three))
#
#
# # Python code to find 3 largest and 4 smallest
# # elements of a list.
#
# grades = [110, 25, 38, 49, 20, 95, 33, 87, 80, 90, 110]
# print(heapq.nlargest(3, grades))
# print(heapq.nsmallest(4, grades))
 
 
 
########################################################################
#-----------------------------Functions--------------------------------#
########################################################################
            
def SieveOfEratosthenes(n):
    prime = [True for i in range(n+1)]
    p = 2
    l = []
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
    for p in range(2, n+1):
        if prime[p]:
            l.append(p)
            # print(p)
        else:
            continue
    return l
 
 
def isPrime(n):
    prime_flag = 0
 
    if n > 1:
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                prime_flag = 1
                break
        if prime_flag == 0:
            return True
        else:
            return False
    else:
        return False
 
 
def gcdofarray(a):
    x = 0
    for p in a:
        x = math.gcd(x, p)
    return x
 
 
# method to print the divisors
def printDivisors(n):
    # Note that this loop runs till square root
    i = 1
    ans = []
    while i <= math.sqrt(n):
 
        if (n % i == 0):
 
            # If divisors are equal, print only one
            if (n / i == i):
                ans.append(i)
            else:
                # Otherwise print both
                ans.append(i)
                ans.append(n // i)
        i = i + 1
    ans.sort()
    return ans
 
 
def CountDivisors(n):
    # Note that this loop runs till square root
    i = 1
    ans = []
    while i <= math.sqrt(n):
 
        if (n % i == 0):
 
            # If divisors are equal, print only one
            if (n / i == i):
                ans.append(i)
            else:
                # Otherwise print both
                ans.append(i)
                ans.append(n // i)
        i = i + 1
    ans.sort()
    return ans
 
 
def binaryToDecimal(n):
    return int(n, 2)
 
 
def countTriplets(a, n):
    s = set()
    for i in range(n):
        s.add(a[i])
    count = 0
    for i in range(n):
        for j in range(i + 1, n, 1):
            xr = a[i] ^ a[j]
            if xr in s and xr != a[i] and xr != a[j]:
                count += 1
    return int(count // 3)
 
 
def generate_twin_prime(n):
    a = 0
    for i in range(1, n + 1):
        j = i + 2
        if isPrime(i) and isPrime(j):
            if 2 ^ (i ^ j) == 0:
                a += 1
    return a
 
 
def smallestDivisor(n):
    if (n % 2 == 0):
        return 2
    i = 3
    while (i * i <= n):
        if (n % i == 0):
            return i
        i += 2
    return n
 
 
def countOdd(L, R):
    N = (R - L) // 2
 
    # if either R or L is odd
    if (R % 2 != 0 or L % 2 != 0):
        N += 1
 
    return N
 
 
def isPalindrome(s):
    return s == s[::-1]
 
 
def sufsum(test_list):
    test_list.reverse()
    res = [sum(test_list[: i + 1]) for i in range(len(test_list))]
    return res
 
 
def prsum(lst):
    return (list(itertools.accumulate(lst)))
 
 
def badachotabadachota(nums):
    nums.sort()
    i = 0
    j = len(nums) - 1
    ans = []
    cc = 0
    while len(ans) != len(nums):
        if cc % 2 == 0:
            ans.append(nums[j])
            j -= 1
        else:
            ans.append(nums[i])
            i += 1
        cc += 1
    return ans
 
 
def primeFactors(n):
    ans = []
    while n % 2 == 0:
        ans.append(2)
        n = n // 2
 
    for i in range(3, int(math.sqrt(n))+1, 2):
        while n % i == 0:
            ans.append(i)
            n = n / i
 
    # Condition if n is a prime
    # number greater than 2
    if n > 2:
        ans.append(n)
    return ans
 
 
def closestMultiple(n, x):
    if x > n:
        return x
    z = (int)(x / 2)
    n = n + z
    n = n - (n % x)
    return n
 
 
def can_form_palindrome(arr, n):
    MAX = 256
    s = ""
    for i in range(n):
        s = s + str(arr[i])
    freq = [0]*MAX
    for i in range(n):
        freq[arr[i]] = freq[arr[i]]+1
    count = 0
    for i in range(MAX):
        if (freq[i] & 1):
            count = count+1
        if (count > 1):
            return False
    return True
 
 
def getPairsCount(arr, n, sum):
 
    m = [0] * 1000
    for i in range(0, n):
        m[arr[i]] += 1
    twice_count = 0
    for i in range(0, n):
        twice_count += m[int(sum - arr[i])]
        if (int(sum - arr[i]) == arr[i]):
            twice_count -= 1
    return int(twice_count / 2)
 
 
def remove_consec_duplicates(test_list):
    res = [i[0] for i in itertools.groupby(test_list)]
    return res
 
 
def BigPower(a, b, mod):
    if b == 0:
        return 1
    ans = BigPower(a, b//2, mod)
    ans *= ans
    ans %= mod
    if b % 2:
        ans *= a
    return ans % mod
# #####################################################################################################
# #------------------------------------------GRAPHS---------------------------------------------------#
# #####################################################################################################
class Graph:
    def __init__(self, edges, n):
        self.adjList = [[] for _ in range(n)]
        for (src, dest) in edges:
            self.adjList[src].append(dest)
            self.adjList[dest].append(src)
 
 
def BFS(graph, v, discovered):
    q = collections.deque()
    discovered[v] = True
    q.append(v)
    ans = []
    while q:
        v = q.popleft()
        ans.append(v)
        # print(v, end=' ')
        for u in graph.adjList[v]:
            if not discovered[u]:
                discovered[u] = True
                q.append(u)
        return ans
    
def factorial( n) :
    res = [None]*500
    # Initialize result
    res[0] = 1
    res_size = 1
 
    # Apply simple factorial formula
    # n! = 1 * 2 * 3 * 4...*n
    x = 2
    while x <= n :
        res_size = multiply(x, res, res_size)
        x = x + 1
     
    i = res_size-1
    while i >= 0 :
        sys.stdout.write(str(res[i]))
        sys.stdout.flush()
        i = i - 1
         
 
# This function multiplies x with the number
# represented by res[]. res_size is size of res[]
# or number of digits in the number represented
# by res[]. This function uses simple school
# mathematics for multiplication. This function
# may value of res_size and returns the new value
# of res_size
def multiply(x, res,res_size) :
     
    carry = 0 # Initialize carry
 
    # One by one multiply n with individual
    # digits of res[]
    i = 0
    while i < res_size :
        prod = res[i] *x + carry
        res[i] = prod % 10; # Store last digit of
                            # 'prod' in res[]
        # make sure floor division is used
        carry = prod//10; # Put rest in carry
        i = i + 1
 
    # Put carry in res and increase result size
    while (carry) :
        res[res_size] = carry % 10
        # make sure floor division is used
        # to avoid floating value
        carry = carry // 10
        res_size = res_size + 1
         
    return res_size
# ########################################################################
# #-----------------------------Code Here--------------------------------#
# ########################################################################
alphabets = list("abcdefghijklmnopqrstuvwxyz")
MOD = int(1e9 + 7)
# GraphAnswer = []
# GraphEdges = []
# graph = Graph(GraphEdges, n)
# discovered = [False] * n
# res = []
# for i in range(n):
#     if not discovered[i]:
#         res += (BFS(graph, i, discovered))
 
for _ in range(inp()):  
    s = insr()
    n, m = invr()
    a = []
    d = {}
    for i in range(m):
        x, w = invr()
        a.append((w, x))
        d[x] = i + 1
    a.sort()
    while len(a) != 2 * n:
        a.pop()
    b = []
    ans = 0
    for i in a:
        b.append((i[1], i[0]))
        ans += i[0]
    b.sort()
    print(ans)
    for i in range(n):
        print(d[b[i][0]], d[b[2 * n - 1 - i][0]])
    print()