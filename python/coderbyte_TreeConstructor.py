def TreeConstructor(strArr):
  pr ={}
  ch ={}
  for q in strArr:
    x, y = map(int, q.replace('(', '').replace(')', '').split(','))
    # children occurs more than 2 is false
    if y in ch:
      ch[y] +=1
      if ch[y] >2:
        return 'false'
    else:
      ch[y] = 1
    if x in pr:
      return 'false'
    else:
      pr[x] = True
  return 'true'

# keep this function call here 
print(TreeConstructor(input()))