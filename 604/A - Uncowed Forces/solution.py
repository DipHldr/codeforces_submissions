def solve():
    points=[500, 1000, 1500, 2000, 2500]
    m=list(map(int,input().split()))
    w=list(map(int,input().split()))
    h=list(map(int,input().split()))
    # print(*m)
    # print(*w)
    # print(*h)
    sum=0
    for i in range(5):
       tt=(1-(m[i]/250))*points[i]-50*w[i]
       
       sum += max(0.3*points[i],tt)
    
    sum=sum+h[0]*100-h[1]*50
    ans=int(sum)
    print(ans)
 
if __name__=="__main__":
    solve()