import math
def sieve():
    val=10**6+1
    primes=[1]*val
    primes[0]=0
    primes[1]=0
 
    for i in range(2,int(math.sqrt(val))):
        if primes[i]:
            for j in range(i**2,val,i):
                primes[j]=0
    return primes
 
def is_perfect_square(x):
    if x<0:
        return False
    root=math.isqrt(x)
    return root*root==x
 
def solve():
    n=int(input())
    arr=list(map(int,input().split()))
    primes=sieve()
 
    for i in range(n):
        if not is_perfect_square(arr[i]):
            print("NO")
            continue
        
        if primes[int(math.sqrt(arr[i]))]:
            print("YES")
        else:
            print("NO")
 
if __name__=="__main__":
    solve()