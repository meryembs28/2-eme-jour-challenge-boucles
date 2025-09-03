#include<stdio.h>
int main ( ) {
int a ,f = 1 ,i ;
printf("veuillez saisir un nbr de votre choix :");
scanf("%d", &a);
if ( a == 0){
   printf("erreur");
}
else {

 for (i=1 ; i<=a ; i++){
    f *= i ;
 } 
 printf ( "  %d! =  %d \n" , a  , f );
    
}
}
