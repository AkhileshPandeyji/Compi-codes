import numpy as np
n = int(input())

mid = n//2
low = n//2
high = low+1
list1 = np.zeros((n,n))



for i in range(n):
    arr = [l for l in range(low,high)]
   
    for k in arr:
        
        list1[i][k] = 1
        
    if i < mid:
        low = low-1
        high = high+1
    else:
        low = low+1
        high = high-1
    

for i in range(len(list1)):
    for j in range(len(list1[i])):
        if list1[i][j] == 1.0:
            print("*",end="")
        else:
            print(" ",end="")
    print()


