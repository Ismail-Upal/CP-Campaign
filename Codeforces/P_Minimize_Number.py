n=int(input())
num=input()
num=num.split()
ev=0
for i in num:
    i=int(i)
    if i%2==0:
        ev+=1

if ev!=n:
    print(0)
    exit()

ans,f=0,0
while 1:
    for i,val in enumerate(num):
        num[i]=int(num[i])
        num[i]=num[i]/2
        if num[i]%2!=0:
            f=1
    ans+=1
    if f==1:
        break

print(ans)