class Nodo:
    def __init__(self, sigla, nomeEstado):
        self.sigla = sigla
        self.nomeEstado = nomeEstado
        self.proximo = None

class ListaEncadeada:
    def __init__(self):
        self.head = None

    def inserirNoInicio(self, nodo):
        nodo.proximo = self.head
        self.head = nodo

    def __str__(self):
        nodos = []
        atual = self.head
        while atual:
            nodos.append(atual.sigla)
            atual = atual.proximo
        return " -> ".join(nodos) if nodos else "None"

class TabelaHash:
    def __init__(self):
        self.tabela = [ListaEncadeada() for _ in range(10)]

    def funcao_hash(self, sigla):
        if sigla == "DF":
            return 7
        else:
            char1, char2 = sigla
            return (ord(char1) + ord(char2)) % 10

    def inserir(self, sigla, nomeEstado):
        posicao = self.funcao_hash(sigla)
        nodo = Nodo(sigla, nomeEstado)
        self.tabela[posicao].inserirNoInicio(nodo)

    def imprimir(self):
        for i, lista in enumerate(self.tabela):
            print(f"Posição {i}: {lista}")

if __name__ == "__main__":
    estados = [
        ("AC", "Acre"), ("AL", "Alagoas"), ("AP", "Amapá"), ("AM", "Amazonas"),
        ("BA", "Bahia"), ("CE", "Ceará"), ("DF", "Distrito Federal"), ("ES", "Espírito Santo"),
        ("GO", "Goiás"), ("MA", "Maranhão"), ("MT", "Mato Grosso"), ("MS", "Mato Grosso do Sul"),
        ("MG", "Minas Gerais"), ("PA", "Pará"), ("PB", "Paraíba"), ("PR", "Paraná"),
        ("PE", "Pernambuco"), ("PI", "Piauí"), ("RJ", "Rio de Janeiro"), ("RN", "Rio Grande do Norte"),
        ("RS", "Rio Grande do Sul"), ("RO", "Rondônia"), ("RR", "Roraima"), ("SC", "Santa Catarina"),
        ("SP", "São Paulo"), ("SE", "Sergipe"), ("TO", "Tocantins")
    ]

    estado_ficticio = ("BK", "Estado Fictício")

    tabela_hash = TabelaHash()

    print("Tabela Hash antes de inserir qualquer informação:")
    tabela_hash.imprimir()
    print("\n")

    for sigla, nomeEstado in estados:
        tabela_hash.inserir(sigla, nomeEstado)

    print("Tabela Hash após inserir os 26 estados e o Distrito Federal - DF:")
    tabela_hash.imprimir()
    print("\n")

    tabela_hash.inserir(estado_ficticio[0], estado_ficticio[1])

    print("Tabela Hash após inserir os 26 estados, Distrito Federal – DF e o estado fictício:")
    tabela_hash.imprimir()
