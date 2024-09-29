# Big O Notation

## O que é Big O?

Big O é uma forma matemática de descrever o comportamento de um algoritmo. É uma notação que descreve o limite superior de tempo de execução de um algoritmo.

Com isso, conseguimos saber se um algoritmo é eficiente ou não, e também comparar algoritmos diferentes.

## Tipos de performance

#### Constante O(1)

Constante é uma funcão que independente do tipo de entrada, o seu tempo de execução é sempre o mesmo. Como por exemplo, a leitura do primeiro index de um array.

```swift
let array = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]];

func log(_ array: [[Int]]) {
  print(array[0])
  print(array[1])
}

log(array)
```

Independente do tamanho do array, o tempo de execução é sempre o mesmo.

### Linear O(n)

Linear é uma função que o tempo de execução é proporcional ao tamanho da entrada. Como por exemplo, achara a posição do número 20 em um array. O algoritmo precisa percorrer todo o array para achar o número.

```swift

let array = [1. 3, 8, 3, 15, 30, 80, 20, 10, 5, 1, 8]

func findIndex(_ array: [Int], _ number: Int) -> Int {
  for (index, value) in array.enumerated() {
    if value == number {
      return index
    }
  }
  return -1
}

findIndex(array, 20)
```

O tempo de execução é proporcional ao tamanho do array.

### Quadrático O(n^2)

Quadrático é uma função que o tempo de execução é proporcional ao quadrado do tamanho da entrada. Como por exemplo, achar todos os pares de um array.

```swift
let array = [1, 2, 3, 4, 5]

func findPairs(_ array: [Int]) {
  for i in 0..<array.count {
    for j in 0..<array.count {
      print(array[i], array[j])
    }
  }
}

findPairs(array)
```

O tempo de execução é proporcional ao quadrado do tamanho do array.

### Logarítmico O(log n)

Logarítmico é uma função que o tempo de execução é proporcional ao logaritmo do tamanho da entrada. Como por exemplo, achar um número em um array ordenado.

```swift
let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

func findIndex(_ array: [Int], _ number: Int) -> Int {
  var low = 0
  var high = array.count - 1

  while low <= high {
    let mid = (low + high) / 2
    let guess = array[mid]

    if guess == number {
      return mid
    }

    if guess > number {
      high = mid - 1
    } else {
      low = mid + 1
    }
  }

  return -1
}

findIndex(array, 5)
```

O tempo de execução é proporcional ao logaritmo do tamanho do array.
