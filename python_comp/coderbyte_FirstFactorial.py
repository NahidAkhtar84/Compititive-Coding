def FirstFactorial(num):

  # code goes here
  nm=1
  for x in range(1,num+1):
	  nm = nm*x
  return nm

# keep this function call here 
print(FirstFactorial(input()))