def CodelandUsernameValidation(strParam):

  # code goes here
  criteria =0
  if len(strParam) >3 and len(strParam)<26:
    criteria +=1
  
  if strParam[0].isalpha():
    criteria +=1
  
  w=0
  for i in strParam:
    if i.isalnum() or i == '_' or i ==" ":
      w +=1
  
  if len(strParam) == w:
    criteria +=1
  
  if strParam[len(strParam)-1] != '_':
    criteria +=1
  
  if criteria == 4:
    return "true"
  else:
    return "false"


# keep this function call here 
print(CodelandUsernameValidation(input()))