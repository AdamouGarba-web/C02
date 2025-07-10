#include <stdio.h>
#include <stdlib.h>

int main () // Début de la fonction
{
    int a, b; // Déclaration des variables entières a et b
    printf("Entrez deux entiers : "); // Demande à l'utilisateur de saisir la valeur de a
    scanf("%d %d", &a, &b); // lit la valeur saisie par l'utilisateur et l'assigne à a

    // Affichage avant échange
    printf("Avant échange: a = %d, b = %d\n", a, b);

    // Echange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Apres echange : a = %d, b = %d\n", a, b); // affiche les valeurs de a et b aprés l'échange

    return 0; // Fin du programme
}