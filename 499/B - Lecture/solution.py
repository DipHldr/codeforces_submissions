def solve():
    a,b=map(int,input().split())
    word=dict()
 
    for i in range(b):
        l1,l2=input().split()
        word[l1]=l2
    ll=list(input().split())
    # print(*ll)
    for i in range(a):
        if len(ll[i])>len(word[ll[i]]):
            ll[i]=word[ll[i]]
    ans=" ".join(ll)
    print(ans)
 
if __name__=="__main__":
    solve()