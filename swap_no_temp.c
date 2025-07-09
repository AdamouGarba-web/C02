#include <stdio.h>
int main (){ // Début de la fonction
int X, Y; // Déclaration des variables entières X et Y
printf("Entrer la valeur de X :"); // Demande à l'utilisateur de saisir la valeur de X
scanf("%d", &X); // lit la valeur saisie par l'utilisateur et l'assigne à X
printf("Entrer la valeur de Y :"); // Demande à l'utilisateur de saisir la valeur de Y
scanf("%d", &Y); // lit la valeur saisie par l'utilisateur et l'assigne à Y

X = X+Y;
Y = X-Y;
X = X-Y;

printf("Apres echange : X = %d, Y = %d\n", X, Y); // affiche les valeurs de X et Y aprés l'échange

return 0; // Fin du programme
}