#include <stdio.h> // Déclaration de la bibliothèque standard
#include <stdlib.h>

int main(int argc, char* argv[]) // Début de la fonction
{
    int N, F = 1, i; // Déclaration des variables

    printf("Donner un entier:"); // Affiche un message à l'utilisateur pour saisir un nombre entié
    scanf("%d", &N); // Lecture de l'entier saisi par l'utilisateur et le stocke dans N

    for (i = 1; i <= N; i++) // Boucle de 1 à N inclut pour la factorielle
    {
        F = F * i; // Multiplie F par i à chaque tour
    }

    printf("le factoriel de %d est : %d\n", N, F); // Affiche le resultat indiquant le nombre dont le factoriel a été calculé (N) ainsi que la valeur du factoriel (F)

    return 0; // Fin du programme
}