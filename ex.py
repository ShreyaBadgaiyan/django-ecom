list=[]
num=int(input("Enter number of elements in list :"))
for i in range(num):
    n=int(input())
    list.append(n)

list.sort()
print(list)