import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
z = 0
for i in range(n):
    num_of_swap = 0
    for j in range(n-1):
        if a[j+1] < a[j]:
            x = a[j]
            a[j] = a[j+1]
            a[j+1] = x
            num_of_swap +=1
            z += 1
            
    if num_of_swap == 0:
        break
        
print('Array is sorted in {} swaps.'.format(z))
print('First Element: {}'.format(a[0]))
print('Last Element: {}'.format(a[n-1]))