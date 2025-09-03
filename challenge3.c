#include<stdio.h>
int main ( ) {
int a , i ;
int s = 0;
printf("veuillez saisir un nbr de votre choix :");
scanf("%d", &a);
 for (i=0; i<=a ; i++){
    s += i ;
 } 
 printf ( "  la somme  =  %d \n" ,  s);
 
}
