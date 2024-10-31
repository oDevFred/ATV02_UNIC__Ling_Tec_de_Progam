#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    
    printf("Digite um numero positivo inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        int quadrado = numero * numero;
        double raizQuadrada = sqrt(numero);

        printf("Quadrado de %d: %d\n", numero, quadrado);
        printf("Raiz quadrada de %d: %.2f\n", numero, raizQuadrada);
    }

    return 0;
}
