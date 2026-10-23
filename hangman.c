#include <stdio.h>
int main ()
{
    const char secret[] = "MONSTER4EVER";
    char guess;

    printf("Buchstaben: ");
    if (scanf("%c", &guess) != 1){
        printf("Ungültige Eingabe");
        return 1;
    }
    
    int treff = 0;
    for (int i = 0; i < sizeof(secret) - 1; i++) {
        if ((secret[i]) == guess) {
            treff++;
        }
    }
    printf("Treffer: %d", treff);
    return 0;
}
