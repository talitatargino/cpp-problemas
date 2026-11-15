def verifica(matriz):
    erro = False
    for i in range(len(matriz)):
        for j in range(len(matriz[0])):
            if matriz[i][j]=='1':
                if (j!=len(matriz[0])-1 and matriz[i][j+1]=='0'and i!=len(matriz)-1 and matriz[i+1][j]=='0'):
                    return True
    return erro
t=int(input())
for _ in range(t):
    matriz=[]
    n=int(input())
    for i in range(n):
        linha= input()
        matriz.append(linha)
    if verifica(matriz):
        print("NO")
    else:
        print("YES")