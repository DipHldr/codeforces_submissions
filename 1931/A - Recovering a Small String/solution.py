def find_smallest_word(n):
    for i in range(1, 27):
        for j in range(1, 27):
            for k in range(1, 27):
                if i + j + k == n:
                    return chr(i + 96) + chr(j + 96) + chr(k + 96)
 
# Input handling
t = int(input())
for _ in range(t):
    n = int(input())
    print(find_smallest_word(n))