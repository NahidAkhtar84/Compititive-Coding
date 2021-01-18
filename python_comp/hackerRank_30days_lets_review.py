# Enter your code here. Read input from STDIN. Print output to STDOUT

def poxy(s):
    res1 =""
    res2 =""

    for i in range(len(s)):
        if i%2 ==0:
            res1 +=s[i]
        else:
            res2 +=s[i]
            
    print("{} {}".format(res1, res2))


n = int(input())
for j in range(n):
    s = input()
    poxy(s)

        
