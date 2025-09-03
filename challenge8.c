#include <stdio.h>
int main() {
    int n; 
    int t1, t2, tn;
        printf("Veuillez saisir le nbr de termes  : ");
        scanf("%d", &n);
    t1 = 0;
    t2 = 1;
    printf("Les termes de cette suite de Fibonacci :\n");
    if (n==0){
         printf("%d", t1);
    }
    else if (n==1){
         printf("%d %d", t1, t2);
    }
    else {
        printf("%d %d" )
    for (int i = 0; i < n; i++) {
        tn = t1 + t2;
        printf(" %d", tn); 
        t1 = t2;
        t2 = tn;
    }
    return 0;
} }
