#include<stdio.h>
int main ( ) {
int b , e ,i ;
int p = 1;
printf("veuillez saisir un nbr svp :");
scanf("%d", &b);
printf("veuillez saisir la puissance svp :");
scanf("%d", &e);
if ( e == 0 )
{
   printf(" %d ^ %d = 0" , b , e);
}
else{
 for (i=0; i<e ; i++){
    p = p * b ; 
 } 
 printf ( " %d ^ %d = %d  " , b , e ,p); 
}
} 
