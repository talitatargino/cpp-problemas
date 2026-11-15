entrada= input()
saida = ""
for c in entrada:
    c = c.lower()
    if c.isalpha() and c!= 'a' and c!='e' and c!='i' and c!='o' and c!='u' and c != 'y':
        saida += '.'
        saida+=c
print(saida)