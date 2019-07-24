t=int(input())
while t>0:
    t-=1
    n=int(input())
    s=n+(n//2)*(n//2+1)
    res=0
    k=0
    while s>0:
        res=res+s
        k=k+s%3
        s=s//3
        if(k>=3):
            s=s+k//3
            k=k%3
    
    print(res)
