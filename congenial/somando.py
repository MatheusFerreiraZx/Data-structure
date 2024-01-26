N = int(input())
numeros = []
for i in range(N):
    X = int(input())
    numeros.append(X)
soma = 0
for numero in numeros:
    soma += numero
print(soma)
