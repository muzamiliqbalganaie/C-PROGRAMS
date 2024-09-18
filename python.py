from array import *

vals =array('i',[4,5,8,4,2,])
newArr =array(vals.typecode, (a*a for a in vals))

i=0

while i<len(newArr):
       print(newArr[i])
       i+=1
