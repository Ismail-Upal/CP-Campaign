s=input()

l,r=0,0
ans=[]
a=[]
for val in s:
    if val=='L':
        l+=1
    else:
        r+=1
    a.append(val)
    if l==r:
        ans.append(''.join(a))
        a.clear()
        l,r=0,0

print(len(ans))
for i in ans:
    print(i)