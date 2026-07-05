def solve():
    n,k=map(int,input().split())
    ans=list()
    for i in range(0,n):
        if k>0:
            ans.append(2*i+2)
            ans.append(2*i+1)
        else:
            ans.append(2*i+1)
            ans.append(2*i+2)
        k-=1
    print(*ans)
if __name__=="__main__":
    solve()
    