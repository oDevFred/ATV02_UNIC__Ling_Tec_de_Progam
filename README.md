# Programa de Cálculo de Quadrado e Raiz Quadrada

Este projeto foi desenvolvido como parte da disciplina de Linguagem e Técnicas de Programação no curso de Análise e Desenvolvimento de Sistemas da Faculdade UNICESUMAR. O código solicita ao usuário que insira um número positivo inteiro e calcula o quadrado e a raiz quadrada desse número.

## Funcionalidade do Programa

O código lê um número inteiro fornecido pelo usuário, verifica se ele é positivo e, se for, calcula e exibe o quadrado e a raiz quadrada desse número.

### Estrutura do Código

1. **Declaração de Variáveis**
   - `int numero`: Variável para armazenar o número inteiro fornecido pelo usuário.
   - `int quadrado`: Variável para armazenar o quadrado do número.
   - `double raizQuadrada`: Variável para armazenar a raiz quadrada do número.

2. **Entrada do Usuário**
   - Usa `printf` para solicitar que o usuário digite um número positivo inteiro.
   - `scanf("%d", &numero)`: Lê o número inteiro inserido pelo usuário.

3. **Verificação de Número Positivo**
   - Se o número for negativo, o programa exibe uma mensagem solicitando um número positivo.
   - Caso contrário, calcula o quadrado (`numero * numero`) e a raiz quadrada (`sqrt(numero)`).

4. **Saída do Resultado**
   - Exibe o quadrado e a raiz quadrada do número, formatando a raiz quadrada com duas casas decimais.

## Exemplo de Uso

### Entrada
```plaintext
Digite um numero positivo inteiro: 16
```

### Saída
```plaintext
Quadrado de 16: 256
Raiz quadrada de 16: 4.00
```

## Tecnologias e Conceitos Utilizados

- **C**: Linguagem de programação utilizada.
- **Biblioteca Math**: Inclusão da biblioteca `math.h` para uso da função `sqrt()`.
- **Entrada e Saída**: Utilização das funções `printf` e `scanf` para interação com o usuário.
- **Estrutura Condicional**: Uso de `if` para verificar se o número é positivo.

## Autor

Caio Frederico, como parte da disciplina de Linguagem e Técnicas de Programação da Faculdade UNICESUMAR.
