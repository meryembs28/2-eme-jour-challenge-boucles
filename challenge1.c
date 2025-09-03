#include<stdio.h>
int main ( ) {
 int a ,m,i ;
 printf("veuillez saisir un nbr de votre choix :");
 scanf("%d", &a);
 for (i=0 ; i<=10 ; i++){
     m = a * i ;
     printf ( "%d x %d = %d \n" , a , i , m );
 }
}