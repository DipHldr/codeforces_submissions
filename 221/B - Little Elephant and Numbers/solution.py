def solve():
    x=int(input())
    # if x==1:
    #     print(1)
    #     return
    arr=list()
 
    for i in range(1,int(x**0.5+1)):
        if x%i==0:
            arr.append(i)
            if i!= x//i:
                arr.append(x//i)
    # print(*arr)
    # print(len(arr))
    count=0
    for i in range(len(arr)):
        tt=arr[i]
        
        f=0
        while tt>0:
            vv=x
            xx=tt%10
            while vv>0:
                pp=vv%10
                # print(xx," ",pp)
                if pp==xx:
                    count+=1
                    f=1
                    # print(arr[i])
                    break
                vv=vv//10
                # print(xx," ",pp)
            if f:
                break
            # print("
")
            tt=tt//10
    print(count)
 
 
 
if __name__=="__main__":
    solve()