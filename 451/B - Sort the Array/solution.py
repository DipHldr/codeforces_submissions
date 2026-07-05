def solve():
    n=int(input())
    arr=list(map(int,input().split()))
 
    L,R=0,0
    f=1
    a=arr[:]
 
    for i in range(n):
        if f and i<n-1 and  arr[i]>arr[i+1]:
            L=i
            f=0
        elif i>0 and arr[i]<arr[i-1]:
            R=i
    # arr.reverse(L,R)
    # arr[L:R+1]=arr[L:R+1][::-1]
    x,y=L,R
    while x<y:
        arr[x],arr[y]=arr[y],arr[x]
        x+=1
        y-=1
    a.sort()
    # print(*arr)
    # print(*a)
    # print(L," ",R)
    for i in range(n):
        if a[i]!=arr[i]:
            print("no")
            return
    print("yes")
    print(L+1," ",R+1)
 
if __name__=="__main__":
    solve()
 
        