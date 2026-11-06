#include <stdio.h>

int strcmp(const char word1[], const char word2[]) {
    int diff = 0;
    for (int i = 0; word1[i] != '\0' || diff; diff |= word1[i] != word2[i], i++)
        ;   
    return !diff;
}

int main ()
{
    const char secret[] = "MONSTER4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    char guess;
    int hits;

    for (int i = 0; i < len; i++){
        guessed[i] = '_';
    }

    int fails;
    while (fails < 5) {
        printf("Buchstaben: ");
        if (scanf("%c", &guess) != 1){
        printf("Ungültige Eingabe");
        return 1;
    }
    
    hits = 0;
    for (int i = 0; i < len; i++) {
        if (guess == secret[i]) {
            hits++;
            guessed[i] = guess;
        }
    }
    
    for (int i = 0; i < len; i++) {
         printf("%c ", guessed[i]);
    }
    fails += (hits == 0);

    printf("Treffer: %d", hits);
    }
    
    return 0;
}
