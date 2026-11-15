s=input()
j = len(s)
while j>0:
    muda = False
    if j>=6 and s[j-6:j]== "eraser":
        j-=6
        muda = True
    elif j>=5 and s[j-5:j] == "erase":
        j-=5
        muda =True
    elif j>=7 and s[j-7:j]=="dreamer":
        j-=7
        muda= True
    elif j>= 5 and s[j-5:j]=="dream":
        j-=5
        muda=True
    if(not muda):
        break

if(j==0):
    print("YES")
else:
    print("NO")