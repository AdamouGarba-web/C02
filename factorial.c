#include <stdio.h> // Déclaration de la bibliothèque standard

int main() // Début de la fonction
{
    int n, i; // Déclaration des variables
    long fact = 1;
    scanf("%d", &n); // Lecture de l'entier saisi par l'utilisateur et le stocke dans n

    if (n < 0) // Veriffier si le nombre est negatif 
    {
        printf("La factorielle n'est pas définie pour les nombres negatifs.\n");
    } else
        for (i = 1; i <= n; i++) // Boucle de 1 à n inclut pour la factorielle 
        {
            fact *= i; // Multiplie factoriel par i à chaque tour
        }

        {
            printf("Le factoriel de %d est : %ld\n", n, fact); // Affiche le resultat indiquant le nombre dont le factoriel a été calculé (n) ainsi que la valeur du factoriel
            
        }

    return 0; // Fin du programme
}
