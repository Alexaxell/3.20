#include <stdio.h>

int main(void) {
    int anno;
    printf("inserisci l'anno:");
    scanf("%d", &anno);
    if (anno % 4 == 0) {
        printf("l'anno è bisestile");
    }
    else if (anno % 4 == 0 && anno & 400 == 0) {
            printf("l'anno è secolare");
    }
    else {
        printf("l'anno non è ne bisestile, ne secolare");
    }

    return 0;
}
