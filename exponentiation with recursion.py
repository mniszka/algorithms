#3^4

def expo(a,b):
  if(b==0): return 1
  else: return expo(a,b-1)*a
  
print(expo(3,4))
