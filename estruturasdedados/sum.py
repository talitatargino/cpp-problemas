n= int(input())
for _ in range(n):
    valores=[]
    valor = input()
    valores.append(valor[0])
    for i in range(1,len(valor)):
        for j in range(len(valores)):
            valores[j]+='0'
        if valor[i]!= '0':
            valores.append(valor[i])
    print(len(valores))
    valores_int = list(map(int, valores))
    print(*valores_int)