#include <stdio.h>

int countHits(const char secret[], const char  guess){
    int treff = 0;
    for (int i = 0; i < sizeof(secret) - 1; i++) {
        if ((secret[i]) == guess) {
            treff++;
        }
    }
    return treff;
}

int main ()
{
    const char secret[] = "MONSTER4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    const char guess;
    int treff = 0;

    for (int i = 0; i < len; i++){
        guessed[i] = '_';
    }

    printf("Buchstaben: ");
    if (scanf("%c", &guess) != 1){
        printf("Ungültige Eingabe");
        return 1;
    }
    
    for (int i = 0; i < len; i++) {
         printf("%c ", guessed[i]);
    }
        
    printf("Treffer: %d", treff);
    return 0;
}
