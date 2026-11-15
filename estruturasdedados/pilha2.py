s = input()
pilha = []

for c in s:
    pilha.append(c)

    if len(pilha) >= 3 and pilha[-3:] == ['A', 'B', 'C']:
        pilha.pop()
        pilha.pop()
        pilha.pop()

print(''.join(pilha))