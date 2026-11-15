def forma_string(i,f, t,a,c,g):
    saida= ""
    qnt_t=t[f]-t[i-1]
    qnt_a=a[f]-a[i-1]
    qnt_c=c[f]-c[i-1]
    qnt_g=g[f]-g[i-1]
    saida=""
    temA=False
    temT=False
    temG= False
    temC= False
    for _ in range(4):
        escolhida= ""
        max = -1
        if not temA and qnt_a>max:
            max =qnt_a
            escolhida="A"
        if not temT and qnt_t>max:
            max =qnt_t
            escolhida="T"
        if not temG and qnt_g>max:
            max = qnt_g
            escolhida = "G"
        if not temC and qnt_c>max:
            max = qnt_c
            escolhida="C"
        saida+=escolhida
        if escolhida =="A":
            temA=True
        if escolhida=="C":
            temC=True
        if escolhida=="G":
            temG =True
        if escolhida=="T":
            temT= True  
    return saida
    


entrada= input()
adenina=[0]*(len(entrada)+1)
timina=[0]*(len(entrada)+1)
citosina=[0]*(len(entrada)+1)
guanina=[0]*(len(entrada)+1)
for i in range(0, len(entrada)):
    if entrada[i]=="A":
        if (i>0):
            adenina[i+1]=adenina[i]+1
            citosina[i+1]=citosina[i]
            timina[i+1]=timina[i]
            guanina[i+1]= guanina[i]
        else:
            adenina[i+1]=1
    elif entrada[i]=="T":
        if (i>0):
            timina[i+1]=timina[i]+1
            guanina[i+1]=guanina[i]
            citosina[i+1]=citosina[i]
            adenina[i+1]=adenina[i]
        else:
            timina[i+1]=1
    elif entrada[i]=="C":
        if (i>0):
            citosina[i+1]=citosina[i]+1
            timina[i+1]=timina[i]
            guanina[i+1]=guanina[i]
            adenina[i+1]=adenina[i]
        else:
            citosina[i+1]=1
    else:
        if (i>0):
            guanina[i+1]=guanina[i]+1
            citosina[i+1]=citosina[i]
            timina[i+1]=timina[i]
            adenina[i+1]=adenina[i]
        else:
            guanina[i+1]=1
n = int(input())
for i in range(n):
    a ,b= map(int, input().split())
    print(forma_string(a, b,timina, adenina,citosina,guanina))
