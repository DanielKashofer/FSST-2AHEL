#include <stdio.h>
 int main()
 {
        
    // test
    
        int const zahl = 42;
        int try = 0;
        int geraten;
        int richtig = 0;

        for (int try = 0; ((try < 10)&&(richtig == 0)); try++) {
            printf("\n\nErrate die Zahl: ");
            scanf("%d", &geraten);
        }
            if (geraten < 0){
                printf("Die richtige Zahl ist : %d", zahl);
            }
            else if (geraten < 42) {
                printf("\nDeine Zahl ist zu klein");
            }
            else if (geraten > 42) {
                printf("\nDeine Zahl ist zu gross");
            }
            else {
                printf("\nRICHTIG !!! Die Zahl lautet 42");
                richtig = 1;
            }
        if (richtig == 0){
            printf("\nDu hast deine 10 Versuche aufgebraucht. Du konntest die Zahl nicht erraten ;(");
        }

        
        





    return 0;
 }