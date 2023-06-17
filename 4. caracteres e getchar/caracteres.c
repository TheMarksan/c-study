#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Digite um caractere: ");
    letra = getchar();

    //getchar = mesma função do scanf, exclusivo para strings
    //getc e fgetc = dados de outras fontes além do teclado(stdin)

    printf("Caracter lido: %c\n", letra);
    return 0;
}
