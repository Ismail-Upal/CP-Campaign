n=int(input())
num=input()
num=num.split()
dct={}
for i in num:
    i=int(i)
    if i in dct:
        dct[i]+=1
    else :
        dct[i]=1

ans=0
for i,val in dct.items():
    if val>i:
        ans+=val-i
    elif i>val:
        ans+=val

print(ans)
