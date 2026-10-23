#include <stdio.h>
int main ()
{
    const char secret[] = "MONSTER4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
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
        if ((secret[i]) == guess) {
            treff++;
            guessed[i] = guess;
        }
    }
    
    for (int i = 0; i < len; i++) {
         printf("%c ", guessed[i]);
    }
        
    printf("Treffer: %d", treff);
    return 0;
}
