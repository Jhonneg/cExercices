#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o três numeros \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Todos os numeros são iguais \n");
    }
    else if (a > b && a > c)
    {
        printf("a é o numero maior \n");
    }
    else if (b < a && b < c)
    {
        printf("b é o numero menor \n");
    }
    else if (a + b > c)
    {
        printf("A soma de a e b é maior que c \n");
    }

    return 0;
}
