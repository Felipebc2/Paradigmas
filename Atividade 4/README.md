## 📋 Descrição

Sistema em Python para cadastrar e processar informações de voluntários, implementado com dois paradigmas:

- **Programação Orientada a Objetos (POO)**
- **Programação Funcional**

---

## 🗂️ Estrutura do Projeto

```
atividade4/
│
├── README.md
└── voluntarios.py
```

---

## Parte 1 – Modelagem com POO

A classe `Pessoa` foi criada com:

- **Atributos privados:** `__nome` e `__idade` (encapsulamento via name mangling do Python)
- **Construtor:** `__init__(self, nome, idade)`
- **Getters:** `get_nome()` e `get_idade()`
- **Método de verificação:** `eh_maior_de_idade()` — retorna `True` se idade ≥ 18

### Boas práticas aplicadas

- Nenhuma variável global utilizada
- Dados encapsulados com atributos privados (`__`)
- Lista de 10 voluntários criada e retornada por função (`criar_voluntarios`)

---

## Parte 2 – Processamento Funcional

Utilizando `map`, `filter`, `lambda`, `reduce` e *list comprehensions*:

| # | Operação | Recurso utilizado |
|---|----------|-------------------|
| 1 | Lista de nomes dos voluntários | `map` + `lambda` |
| 2 | Filtrar voluntários maiores de 18 anos | `filter` + `lambda` |
| 3 | Calcular a idade média | `reduce` + `lambda` |
| 4 | Calcular a soma das idades | `reduce` (reutilizado) |
| 5 | Mensagens no formato "João tem 25 anos" | *list comprehension* |

---

## ❓ Perguntas e Respostas

**1. Qual paradigma foi mais fácil de entender?**

A Programação Funcional é mais fácil de *ler* pontualmente — cada operação (`map`, `filter`) tem um propósito claro e direto. Porém, a POO é mais fácil de *entender conceitualmente*, pois modela o mundo real: uma `Pessoa` com nome, idade e comportamentos é algo intuitivo.

---

**2. Qual você considerou mais simples de implementar?**

A Programação Funcional, bastou uma linha por operação, sem precisar criar classes, construtores ou getters. O `map`, `filter` e `reduce` resolvem tudo de forma direta. Porém a utilização de POO facilita o entendimento futuro de sistemas complexos com reutilização de classes.

---

**3. Qual solução seria mais fácil de manter no futuro?**

A POO, pois se precisar adicionar um novo atributo (ex: CPF, e-mail), basta modificar a classe `Pessoa` em um só lugar. Na funcional, qualquer mudança na estrutura dos dados afeta todas as funções espalhadas.

---

**4. Onde você percebeu maior clareza ou menor repetição de código?**

Na Programação Funcional, operações como filtrar maiores de idade ou gerar mensagens ficaram em uma única linha, sem loops explícitos, o que reduz repetição e deixa a intenção do código mais clara.

---

**5. Com qual paradigma você se sentiu mais confortável? Por quê?**

Com a POO, porque organiza o código em torno de entidades reais, fica mais fácil de visualizar o que o sistema representa. Além disso, é o paradigma mais cobrado no mercado de trabalho, então eu já tenho mais familiaridade com seus conceitos.

---

## ▶️ Como executar

```bash
python voluntarios.py
```

## 🛠️ Requisitos

- Python 3.8+
- Nenhuma biblioteca externa necessária (`functools` já é nativa)