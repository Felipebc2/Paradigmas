# Comparação de Programação Imperativa: JS vs C vs Python

---

## Estrutura Geral

Todas as implementações seguem o mesmo fluxo:

```
Entrada → Identificar Categoria → Escolher Modalidade → Calcular → Saída
```

---

## Comparação por Aspecto

### 1. Tipagem de Variáveis

| Linguagem  | Tipo           | Exemplo                        |
|------------|----------------|--------------------------------|
| JavaScript | Dinâmica       | `let valor = 80000`            |
| C          | Estática       | `float valor; int modalidade;` |
| Python     | Dinâmica       | `valor = float(input(...))`    |

Em C, o tipo deve ser declarado antes do uso. Em JS e Python, o tipo é inferido em tempo de execução.

---

### 2. Entrada de Dados

| Linguagem  | Mecanismo                        | Observação                          |
|------------|----------------------------------|-------------------------------------|
| JavaScript | `readline` com callback          | Assíncrono — requer função de retorno |
| C          | `scanf("%f", &valor)`            | Síncrono, lê diretamente da memória |
| Python     | `input()` com cast explícito     | Síncrono e simples                  |

JS é a mais verbosa para I/O por conta do modelo assíncrono do Node.js.

---

### 3. Declaração de Funções

**JavaScript:**
```javascript
function identificarCategoria(valor) { ... }
```

**C:**
```c
int identificarCategoria(float valor) { ... }
```

**Python:**
```python
def identificar_categoria(valor): ...
```

C exige declarar o tipo de retorno e dos parâmetros. JS e Python não.

---

### 4. Estrutura de Decisão

Todas usam `if/else` encadeado, mas com sintaxe diferente:

| Linguagem  | Palavra-chave intermediária |
|------------|-----------------------------|
| JavaScript | `else if`                   |
| C          | `else if`                   |
| Python     | `elif`                      |

---

### 5. Operador de Potência

| Linguagem  | Sintaxe              |
|------------|----------------------|
| JavaScript | `Math.pow(1.05, 4)`  |
| C          | `pow(1.05, 4)` + `#include <math.h>` |
| Python     | `1.05 ** 4`          |

---

### 6. Formatação de Saída

| Linguagem  | Exemplo                                  |
|------------|------------------------------------------|
| JavaScript | `valorFinal.toFixed(2)`                  |
| C          | `printf("R$ %.2f\n", valorFinal)`        |
| Python     | `f"R$ {valor_final:.2f}"`               |

---

## Resumo

| Critério              | JavaScript | C        | Python   |
|-----------------------|------------|----------|----------|
| Verbosidade           | Alta       | Média    | Baixa    |
| Tipagem               | Dinâmica   | Estática | Dinâmica |
| Facilidade de I/O     | Baixa      | Média    | Alta     |
| Necessidade de libs   | Média      | Alta     | Baixa    |
| Legibilidade          | Média      | Média    | Alta     |

---

## Conclusão

As três linguagens implementam o mesmo algoritmo imperativo (sequência, decisão, iteração), mas diferem em:

- **C** exige mais controle manual (tipos, bibliotecas, ponteiros de memória no `scanf`).
- **JavaScript** tem complexidade adicional por conta do I/O assíncrono.
- **Python** é a mais concisa e legível para este tipo de problema.

A **lógica do algoritmo é idêntica** nas três — o que muda é apenas a forma como cada linguagem expressa essa lógica.