#include <stdio.h>
#include <stdlib.h>

int strlen(char *wort){
    int sz = 0;
    for (;wort[sz] != '\0'; sz++);
    return sz;
}

void dump(char *wort2){
    for(int i = 0; wort2[i] != '\0'; i++)
        printf("%c ", wort2[i]);
    printf("\n");
}

char* init(int sz, char c) {
    char *wort = malloc(sz);
       for (int i = 0; i < sz; i++){
            wort[i] = c;
        return wort;
    }
    wort[sz] = '\0';
    return wort;
}


int main(){
    char *wort = "WORT";
    char *wort2 = init(strlen(wort), '?');
    
    dump(wort2);
    free(wort2);


return 0;
}
