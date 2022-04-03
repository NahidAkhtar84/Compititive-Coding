t = int(input())
 
for i in range(0,t):
    n = int(input())
    arr = input()   # takes the whole line of n numbers
    l = list(map(int,arr.split(' ')))
    #print(l)
    j = n
    output = []
    while j > 0:
        index = l.index(j)
        output = [(index+1)%j] + output
        print("o: ", output)
        l = l[index+1:]+l[:index]
        j = j-1
    print(*output,sep=" ")
    #print(output)
