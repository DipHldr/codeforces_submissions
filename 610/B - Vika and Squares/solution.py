def solve():
    n=int(input())
    arr=list(map(int,input().split()))
    mini=10**10
    index=-1
    for i in range(n-1,-1,-1):
        if mini>arr[i]:
            mini=arr[i]
            index=i
    # print(mini," ",index)
    ans=n*mini
    
    # curr=0
    xx=0
    maxi_x=-1
    for i in range(2*n):
        if arr[i%n]>mini:
            xx+=1
        else:
            xx=0
 
        maxi_x=max(maxi_x,xx)
    print(ans+maxi_x)
 
if __name__=="__main__":
    solve()