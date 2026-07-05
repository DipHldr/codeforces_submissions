def solve():
    a,b=map(int,input().split())
    tt=input()
    ch=[i for i in range(26)]
    for i in range(b):
        x,y=input().split()
        for j in range(26):
            ascii_x=ord(x)-ord('a')
            ascii_y=ord(y)-ord('a')
            if ch[j]==ascii_x:
                # print(ascii_x," ",ascii_y)
                ch[j]=ascii_y
            elif ch[j]==ascii_y:
                ch[j]=ascii_x
                # print(ascii_x," ",ascii_y)
    # print(*ch)
    ss=list()
    for i in range(a):
        ss.append(chr(ord('a')+ch[ord(tt[i])-ord('a')]))
    ans="".join(ss)
    print(ans)
 
if __name__=="__main__":
    solve()