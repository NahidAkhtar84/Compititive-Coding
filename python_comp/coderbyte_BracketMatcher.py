
def BracketMatcher(strParam):

  # code goes here
  fb=0
  for v in strParam:
    if v == '(':
      fb +=1
    if v == ')':
      fb -= 1
    if fb < 0:
      return 0
  if fb > 0:
    return 0
  return 1

# keep this function call here 
print(BracketMatcher(input()))