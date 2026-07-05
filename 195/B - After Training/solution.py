def solve():
    n,m=map(int,input().split())
    for i in range(n):
        if (m+i%m)%2:
            print((m+i%m+1)//2)
        else:
            print((m-i%m)//2)
 
if __name__=="__main__":
    solve()
    