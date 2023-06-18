#include <stdio.h>
#include <string.h>


int main()
{
    
    printf("Tamanho de um float na memória: %d bytes\n", sizeof(float));
    //4 * 8 = 32 bits
    printf("Tamanho de um double na memória: %d bytes\n", sizeof(double));
    //8 * 8 = 64 bits

    return 0;
}
