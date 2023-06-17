#include <stdio.h>
#include <string.h>


int main()
{
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b); //espaço -> para desconsiderar o buffer \n do teclado
    

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
