#Accepted

def check(t_str: str):
    if t_str[0] == matcher_str:
        return True
    if len(t_str) < 2:
        return False
    return check(t_str[2:])


test_cases = int(input())
inp = []

for t in range(test_cases):
    test_str = input()
    matcher_str = input()
   
    if check(test_str):
        print("Yes")
    else:
        print("No")
        
