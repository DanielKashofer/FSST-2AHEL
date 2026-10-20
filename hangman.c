#include <stdio.h>
int main ()
{
    char secret = 'x';
    char guess = 'y';

    if (guess == secret){
        printf("Treffer %c", secret);}
    else{
        printf("Fail %c", guess);}

    return 0;
}
