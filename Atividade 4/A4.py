from functools import reduce

class Pessoa:
    def __init__(self, nome: str, idade: int):
        self.__nome = nome
        self.__idade = idade

    def get_nome(self) -> str:
        return self.__nome

    def get_idade(self) -> int:
        return self.__idade

    def eh_maior_de_idade(self) -> bool:
        return self.__idade >= 18

    def __repr__(self) -> str:
        return f"Pessoa(nome={self.__nome}, idade={self.__idade})"

def criar_voluntarios() -> list:
    return [
        Pessoa("João", 20),
        Pessoa("Maria", 15),
        Pessoa("Pedro", 18),
        Pessoa("Ana", 21),
        Pessoa("Bruno", 17),
        Pessoa("Carla", 22),
        Pessoa("Diego", 19),
        Pessoa("Ester", 12),
        Pessoa("Felipe", 18),
        Pessoa("Gabriel", 17),
        Pessoa("Heitor", 15),
        Pessoa("Isabella", 21),
        Pessoa("João", 20),
        Pessoa("Maria", 15),
        Pessoa("Pedro", 14),
    ]

# Processamento

def processar_voluntarios(voluntarios: list) -> None:

    # 1. Lista de nomes
    nomes = list(map(lambda p: p.get_nome(), voluntarios))
    print("1. Nomes:", nomes)

    # 2. Maiores de 18 anos
    maiores = list(filter(lambda p: p.eh_maior_de_idade(), voluntarios))
    print("2. Maiores de 18:", [p.get_nome() for p in maiores])

    # 3. Idade média
    soma_idades = reduce(lambda acc, p: acc + p.get_idade(), voluntarios, 0)
    media = soma_idades / len(voluntarios)
    print(f"3. Idade média: {media:.1f} anos")

    # 4. Soma das idades
    print(f"4. Soma das idades: {soma_idades}")

    # 5. Mensagens formatadas
    mensagens = [f"{p.get_nome()} tem {p.get_idade()} anos" for p in voluntarios]
    print("5. Mensagens:")
    for msg in mensagens:
        print("  -", msg)

if __name__ == "__main__":
    voluntarios = criar_voluntarios()
    processar_voluntarios(voluntarios)