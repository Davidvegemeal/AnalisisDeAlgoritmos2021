#include <stdio.h>

#define M 10000

void reordenar( int, int[] );

int main(){
 int n, lista[M], c;
 
 printf( "\ncuantos numeros ordenaras " );
 scanf( "%d", &n );
 
 
    for( c = 0; c < n; c++ ){
     lista[c] = rand() % 10000;
     }
 
     printf( "\nArreglo antes de modificar" );
     for( c = 0; c < n; c++ ){
      printf( "\nlista[%d] = %d", c, lista[c] );
     }
 
     reordenar( n, lista );
 
     printf( "\n\nArreglo despues de modificar" );
     for( c = 0; c < n; c++ ){
      printf( "\nlista[%d] = %d", c, lista[c] );
     }
 
     printf( "\n\n" );
 

     return 0;
    }

void reordenar( int m, int l[] ){
 int aux;
 
 /* for que se encarga de hacer n pasadas */
 for( int c = 0; c < m; c++ ){
  
  /* for que se encarga de comparar los valores */
  for( int c2 = 0; c2 < m; c2++ ){
   
   /* Verificamos que nos ea el final del array */
   if( l[c2] != l[m - 1] ){
    if( l[c2] > l[c2 + 1]){
     aux = l[c2];
     l[c2] = l[c2 + 1];
     l[c2 + 1] = aux;
    }
   }
  }
 }
 
 return;
}
