def FindIntersection(strArr):

  # code goes here
  x = strArr[0]
  y = strArr[1]
  a = x.split(",")
  b = y.split(",")
  res = [i for i in a if i in b]
  strAr = ""
  for val in res:
    strAr += val + ", "
  return strAr

# keep this function call here 

print(FindIntersection(input()))