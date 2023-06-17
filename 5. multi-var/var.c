#include <stdio.h>
#include <string.h>


int main()
{
    char sexo;
    int idade;
    double peso, altura;

    printf("Digite sexo(F ou M), idade, peso e altura:\n");
    scanf("%c%d%lf%lf", &sexo, &idade, &peso, &altura);

    printf("Sexo: %c\nIdade: %d\nPeso: %.1lf\nAltura: %.2lf\n", sexo, idade, peso, altura);

    return 0;
}
