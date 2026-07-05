import sys
 
def solve():
    input = sys.stdin.read
    data = input().split()
    
    n = int(data[0])
    a = int(data[1]) - 1 
    t = [int(x) for x in data[2:]]
    
    ans = 0
    
    for d in range(n):
        left = a - d
        right = a + d
        
        if d == 0:
            if t[a] == 1:
                ans += 1
                
        elif left >= 0 and right < n:
            if t[left] == 1 and t[right] == 1:
                ans += 2
                
        elif left < 0 and right < n:
            if t[right] == 1:
                ans += 1
                
        elif left >= 0 and right >= n:
            if t[left] == 1:
                ans += 1
                
    print(ans)
 
if __name__ == '__main__':
    solve()