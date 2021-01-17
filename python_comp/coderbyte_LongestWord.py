def LongestWord(my_str):
  punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
  str = ""
  list =[]
  for char in my_str:
    if char not in punctuations:
        str = str + char
  list = str.split(" ") 
  length=0
  res=""
  for i in list:
      if len(i) > length:
          length= len(i)
          res = i
  # code goes here
  return res

# keep this function call here 
print(LongestWord(input()))