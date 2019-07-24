t = int(input())
for i in range(t):
    n = int(input())
    k=0
    for j in range(1,n):
        l = j ^ (j-1)
        k = k + str(bin(l)).count("1")
    if(str(bin(k)).count("1") % 2 ==0):
        print("Even")
    else:
        print("Odd")
