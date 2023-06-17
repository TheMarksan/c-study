#include <stdio.h>
#include <string.h>

int main()

{
    void limpar_entrada() {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    char letra1, letra2;

    printf("Digite uma letra: ");
    letra1 = getchar();

    printf("Digite outra letra: ");
    limpar_entrada();
    letra2 = getchar();

    printf("As letras digitadas foram %c e %c\n", letra1, letra2);

    return 0;
}
