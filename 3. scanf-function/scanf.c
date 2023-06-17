#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); // alocar em endereço físico de mémoria

    printf("%d\n", valor);

    return 0;
}
