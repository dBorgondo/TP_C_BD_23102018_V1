#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0; //Abscisses
    int y = 0; //Ordonnées
    int taille = 0;
    char drawer = 'X';
    char filler = 'O';
    printf("Veuillez entrer un caractere pour faire le contour:\n");
    scanf("%c", &drawer);
    fflush(stdin); //Nettoyer l'entrée
    printf("Veuillez entrez un caractere pour faire la partie interne :\n");
    scanf("%c", &filler);
    fflush(stdin); //Nettoyer l'entrée
    printf("Veuillez entrer la taille de votre carre:\n");
    scanf("%d", &taille);
    for (x=1;x<(taille+1);x++){
        for (y=1;y<(taille+1);y++){
            if ((x==1)||(x==taille)||(y==1)||(y==taille)){ //Test traits contour
                printf(" %c",drawer); //Contour
            }
            else{
                printf(" %c",filler); // Intérieur
            }
        }
        printf("\n"); // Changement de ligne
    }
    return 0;
}
