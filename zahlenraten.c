#include <stdio.h>

int main(void)
{
    int a;
    int refzahl = 42;

    printf("Gib eine Zahl ein: ");
    scanf("%d", &a);
    printf("Deine Zahl lautet %d.\n", a);

    if (a > refzahl)
    {
        printf("Deine Zahl ist groesser als die Referenzzahl.\n");
    }
    else if (a < refzahl)
    {
        printf("Deine Zahl ist kleiner als die Referenzzahl.\n");
    }
    else
    {
        printf("Deine Zahl ist gleich der Referenzzahl.\n");
    }



    return 0;
}