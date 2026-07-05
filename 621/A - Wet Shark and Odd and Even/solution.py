def solve():
    n=int(input())
    arr=list(map(int,input().split()))
 
    
    
    ans=0
    maxi=list()
    for x in arr:
        if x%2==0:
            ans+=x
        else:
            maxi.append(x)
    # print(ans)
    tt=len(maxi)
    maxi.sort(reverse=True)
    if tt%2!=0:
        tt-=1
    # print(tt)
    for x in maxi[:tt]:
        ans+=x
    print(ans)
 
if __name__=="__main__":
    solve()
 
                