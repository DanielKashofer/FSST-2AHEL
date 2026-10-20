#include <stdio.h>
int main ()
{
    const char secret = 'x';
    char guess;

    printf("Buchstaben: ");
    if (scanf("%c", &guess) != 1){
        printf("Ungültige Eingabe");
        return 1;
    }

    if (guess == secret){
        printf("Treffer %c", secret);}
    else{
        printf("Fail");}

    return 0;
}
