/* Escreva um programa que leia um número positivo inteiro e apresente o quadrado e a raiz quadrada deste número. */

#include <stdio.h>
#include <math.h> // Inclui a biblioteca para usar a função sqrt()

int main() {
    int numero;

    // Solicita ao usuário que digite um número positivo
    printf("Digite um numero positivo inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        // Calcula o quadrado e a raiz quadrada
        int quadrado = numero * numero; // Calcula o quadrado
        double raizQuadrada = sqrt(numero); // Calcula a raiz quadrada

        // Exibe os resultados
        printf("Quadrado de %d: %d\n", numero, quadrado);
        printf("Raiz quadrada de %d: %.2f\n", numero, raizQuadrada);
    }

    return 0;
}

/* Explicação do Código: 

1- Inclusão da Biblioteca <math.h>:
    Essa biblioteca é necessária para usar a função sqrt(), que calcula a raiz quadrada.

2- Leitura do Número:
    O programa pede ao usuário para digitar um número inteiro positivo e usa scanf("%d", &numero); para ler esse valor.

3- Verificação de Positividade:
    Se o número for negativo, o programa informa ao usuário que é necessário um número positivo.

4- Cálculo do Quadrado:
    O quadrado é calculado multiplicando o número por ele mesmo: int quadrado = numero * numero;.

5- Cálculo da Raiz Quadrada:
    A raiz quadrada é calculada com double raizQuadrada = sqrt(numero);.

6- Exibição dos Resultados:
    O programa imprime o quadrado e a raiz quadrada do número fornecido. A raiz quadrada é formatada para mostrar duas casas decimais: %.2f.
*/