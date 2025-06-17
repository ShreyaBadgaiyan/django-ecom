def isPrime(n):
    if(n==1):return("Neither prime nor composite")
    if(n==2):return("prime")
    i=2
    while(i<=(n//2)):
        if(n%i==0):
            return "composite"
        i=i+1
    return "prime"
        



for i in range(100,201):
    if isPrime(i)=="prime":
        print(i)



