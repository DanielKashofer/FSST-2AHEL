#include <stdio.h>
int main ()
{
    const char secret = 'x';
    char guess;

    printf("Buchstaben: ");
    scanf("%c", &guess);
    
    if (guess == secret){
        printf("Treffer %c", secret);}
    else{
        printf("Fail");}

    return 0;
}
