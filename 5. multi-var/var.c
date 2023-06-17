#include <stdio.h>
#include <string.h>


int main()
{
    char sex;
    int idade;
    double peso, altura;

    printf("Digite sexo(F ou M), idade, peso e altura:\n");
    scanf("%c%d%lf%lf", &sex, &idade, &peso, &altura);

    printf("Sexo: %c\nIdade: %d\nPeso: %.1lf\nAltura: %.2lf\n", sex, idade, peso, altura);

    return 0;
}
