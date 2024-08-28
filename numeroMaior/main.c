#include <stdio.h>

int main()
{
    int valor = 0;
    printf("Digite um valor \n");
    scanf("%d", &valor);
    if (valor > 0)
    {
        printf("O numero é positivo \n");
    }
    else
    {
        printf("O numero é negativo \n");
    }
    return 0;
}
