#include <stdio.h>

int main () // Début de la fonction
{
    int a, b; // Déclaration des variables entières a et b
    scanf("%d %d", &a, &b); // lit la valeur saisie par l'utilisateur

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Après échange: a = %d, b = %d", a, b); // affiche les valeurs de a et b aprés l'échange

    return 0; // Fin du programme
}
