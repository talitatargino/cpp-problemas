n = int(input())
for _ in range(n):
    valor=int(input())
    lista=[]
    while(valor>=1):
        fator = 10**(len(str(valor))-1)
        lista.append((valor//fator)*fator)
        valor= valor%fator
    print(len(lista))
    print(*lista)
