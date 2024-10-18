import math

def dig(n):
  if n == 0:
    return 1  
  else:
    c = 0
    while(n>0):
      n=n/10
      c+=1
    return c

T = int(input())
for _ in range(T):
    num_length = int(input())
    n = int(input())

    sq = n ** 2
    # ans = str(squared_number)
    # print("SqUre is ",sq)
    c = 0
    while(sq>0):
      sq=sq//10
      # print(sq)
      c+=1
    print(c)
    # print(dig(sq))