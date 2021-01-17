def MinWindowSubstring(strArr):

  # code goes here
  x, y = strArr
  leny = len(y)
  lenx = len(x)
  res =[]
  for i in range(lenx):
    cnt=0
    gg = y
    for j in range(i, lenx):
      if x[j] in gg:
        index = gg.index(x[j])
        gg = gg[0 : index : ] + gg[index + 1 : :]
        cnt +=1
          
      if leny - cnt ==0:
        res.append(x[i: j+1])
        break
  return min(res, key=len)

# keep this function call here 
print(MinWindowSubstring(input()))