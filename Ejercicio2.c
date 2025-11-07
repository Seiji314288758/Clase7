/*Victor Seiji Nieto Morita
clase 7 ejercicio 2*/

#include <stdio.h>

void main ()
{
 int matrix[4][3], sum m = 0, mc;
 int i, j;

  
for(i = 0, i < 4; i++)
  {
   for(j = 0; j < 3; j++)
     {
      printf("Dame el valor de la posicion %d, %d: ", i,j);
      scanf("%d", &matrix[i][j]);
     }
  }
for(i = 0, i < 3; i++)
  {
   for(j = 0; j < 4; j++)
     {
      sum = sum + matrix[j][i] 
     }
    if(m < sum)
    {
      m = sum;
      mc = i;
      
    }  
  }  
print("La columna %d que tiene la mayor suma con un total de %d\n", mc, m);
  
}
