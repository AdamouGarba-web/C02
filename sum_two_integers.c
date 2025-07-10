#include <stdio.h>

int main () // Début de la fonction
{
    int a, b, somme; // Déclaration des variable entières: somme pour stocker le resultat, a et b pour stocker deux nombres saisis par l'utilisateur
    scanf("%d %d", &a,&b); // lecture des entièrs et les stocker dans les variables a et b

    somme = a + b; // calcule la somme
    
    printf("La somme est : %d\n",somme); // affiche la somme

    return 0; // fin du programme
}
