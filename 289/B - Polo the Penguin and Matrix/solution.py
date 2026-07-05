#289A CF
def solve():
    n,m,d=map(int,input().split())
    grid=[list(map(int,input().split())) for _ in range(n)]
    a=[ele for row in grid for ele in row]
    
    
    # print(*a)
 
    tt=a[0]%d
    for i in range(1,n*m):
        p=a[i] % d
        if p != tt:
            print(-1)
            return
    a.sort()
    # print(*a)
    x=n*m
    median=x//2
    val=a[median]
    # print(median," ",val)
    sum=0
    for i in range(x):
        sum+=abs(a[i]-val)
    ans=sum//d
    print(ans)
 
 
    
 
if __name__=="__main__":
    solve()