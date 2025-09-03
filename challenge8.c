#include <stdio.h>

int main() {
    int n; // Le nombre de termes à afficher
    int first_term = 0;
    int second_term = 1;
    int next_term;

    printf("Entrez le nombre de termes pour la suite de Fibonacci : ");
    scanf("%d", &n);

    // Gérer les cas où n est 0 ou 1
    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }

    printf("Suite de Fibonacci : ");

    // Afficher les deux premiers termes (0 et 1)
    if (n >= 1) {
        printf("%d ", first_term);
    }
    if (n >= 2) {
        printf("%d ", second_term);
    }

    // Boucle pour calculer et afficher les termes suivants
    for (int i = 2; i < n; i++) {
        next_term = first_term + second_term; // Le terme suivant est la somme des deux précédents
        printf("%d ", next_term);

        // Mettre à jour les valeurs pour la prochaine itération
        first_term = second_term;
        second_term = next_term;
    }

    printf("\n");

    return 0;
}