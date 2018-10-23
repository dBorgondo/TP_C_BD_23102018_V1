#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0; //Abscisse
    int y = 0; //Ordonnées
    int taille = 0;
    char car = 'X';
    printf("Veuillez entrer un caractere avec lequel composer la croix:\n");
    scanf("%c", &car);
    printf("Veuillez entrer la taille de votre croix:\n");
    scanf("%d", &taille);
    for (x=0;x<(taille);x++){
        for (y=0;y<(taille);y++){
            if ((x==y)||(x==((taille-1)-y))){ //Test traits croix
                printf(" %c",car);
            }
            else{
                printf("  ");
            }
        }
        printf("\n"); // Changement de ligne
    }
    return 0;
}
