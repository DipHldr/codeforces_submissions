def solve():
    for _ in range(int(input())):
        n=int(input())
        arr=list(map(int,input().split()))
        a=list()
        b=list()
        c=list()
        d=list()
 
        for i in range(n):
            if arr[i]%6==0:
                a.append(arr[i])
            elif arr[i]%2==0:
                b.append(arr[i])
            elif arr[i]%3==0:
                c.append(arr[i])
            else:
                d.append(arr[i])
        
        ans=list()
        for x in a:
            ans.append(x)
        for x in b:
            ans.append(x)
        for x in d:
            ans.append(x)
        for x in c:
            ans.append(x)
        print(*ans,sep=" ")
 
if __name__=="__main__":
    solve()