#include <stdio.h>
int main() {
    int N , Ni=0 ;
    printf("veuillez saisir un nbr de  chiffres svp :");
    scanf("%d", &N);
    do {
        Ni = (Ni * 10 ) + (N % 10) ;
        N = N / 10;
        printf("%d \n", N);

    } while(N != 0);
    printf ("l inverse de %d est %d " , N , Ni);
    return 0 ;
}
