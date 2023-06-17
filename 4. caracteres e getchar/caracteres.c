#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Digite um caractere: ");
    letra = getchar();

    printf("Caracter lido: %c\n", letra);
    return 0;
}
