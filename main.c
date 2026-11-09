#include <stdio.h>

int main() {

    int	a;
    int b;
    int somme;

    printf("entrer le premier entier : ");
    scanf("%d", &a);

    printf("entrer le deuxième entier : ");
    scanf("%d", &b);

    somme = a + b;

    printf("La somme de %d et %d est : %d\n", a, b, somme);

    return 0;
}
