#include <stdio.h>
int main () { // Début de la fonction
    int nombre; // Déclaration de la variable nombre
    scanf("%d", &nombre); // Lecture de l'entré saisi par l'utilisateur et le stocke dans la variablr nombre

    if(nombre%2 == 0) { // si le reste de la division est égal à 0 si la condition est vraie
        printf("%d est pair\n", nombre); // affiche un message indiquant le nombre est pair
    }
    else // sinon
    {
        printf("%d est impair\n", nombre); // affiche un message indiquant le nombre est impair
    }

    return 0; // fin du programme
}