#include<stdio.h>
int main ( ) {
int a , i ;
int r = 1;
printf("veuillez saisir un nbr de votre choix :");
scanf("%d", &a);
 for (i=1; i<=a ; i++){
    r = 2*i - 1;
    printf ( " %d , " ,  r);
 } 

 
}
