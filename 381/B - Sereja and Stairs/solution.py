def solve():
    n=int(input())
    arr=list(map(int,input().split()))
    
    a=sorted(arr)
    freq={}
    for x in arr:
        if x not in freq:
            freq[x]=0
        freq[x]+=1
    ans=n
    
    if freq[a[-1]]>1:
        ans=ans-freq[a[-1]]+1
    freq.pop(a[-1],None)
 
    sorted_freq=dict(sorted(freq.items()))
    # print(sorted_freq)
 
    for k,v in freq.items():
        if v>2:
            ans=ans-freq[k]+2
    print(ans)
    ans=list()
    for k,v in sorted_freq.items():
        if sorted_freq[k]>0:
            ans.append(k)
            sorted_freq[k]-=1
 
    ans.append(a[-1])
    for k,v in reversed(sorted_freq.items()):
        if sorted_freq[k]>0:
            ans.append(k)
            sorted_freq[k]-=1
    print(*ans)
    
if __name__=="__main__":
    solve()
        