def solve():
    for _ in range(int(input())):
        n=int(input())
        a=list(map(int,input().split()))
 
        # print("H
")
        cnt1=dict()
        cnt2=dict()
        x=a[0]
        a=a[1:]
        c=0
        s=set()
        while x not in s:
            if x not in cnt1:
                cnt1[x]=0
                cnt2[x]=0
            cnt1[x]+=1
            cnt2[x]+=c
            s.add(x)
            if x&1:
                x+=1
            else:
                x>>=1
            c+=1
        
        for x in a:
            c=0
            vis=set()
            while x not in vis:
                if x in cnt1:
                    cnt1[x]+=1
                    cnt2[x]+=c
                vis.add(x)
                if x&1:
                    x+=1
                else:
                    x>>=1
                c+=1
 
        ans=10**18
        for val,count in cnt1.items():
            if count==n:
                ans=min(ans,cnt2[val])
        print(ans)
 
if __name__=="__main__":
    solve()