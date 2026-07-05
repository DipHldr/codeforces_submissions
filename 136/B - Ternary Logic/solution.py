def convert_to_ternary(x):
    result=0
    multiplier=1
    while x>0:
        rem=x%3
        result=result+(rem*multiplier)
        multiplier*=10
        x=x//3
    return result
def solve():
    a,c=map(int,input().split())
   
    #b=3*k+c-a
 
    a_t=convert_to_ternary(a)
    c_t=convert_to_ternary(c)
    
    ans=0
    base_10_multiplier=1
    
    while a_t>0 or c_t>0:
        a_tl=a_t%10
        c_tl=c_t%10
 
        ss=(c_tl-a_tl+3)%3
        ans=ans+(ss*base_10_multiplier)
        base_10_multiplier*=3
        
        a_t=a_t//10
        c_t=c_t//10
    print(ans)
 
if __name__=="__main__":
    solve()