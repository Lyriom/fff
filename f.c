/* 
tenemos que tener en cuenta que la serie de fibonacii es 
0,1,1,2,3,5,8,13,21,34,55...
*/
#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, generador, sum = 0;

    // Pedir al usuario el número de términos de la serie
    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci:\n");

    // Imprimir los primeros n términos de la serie
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        sum += t1;
        generador = t1 + t2;
        t1 = t2;
        t2 = generador;
    }

    // Imprimir la suma de los términos de la serie
    printf("\nSuma de los términos de la serie de Fibonacci: %d\n", sum);

    return 0;
}
