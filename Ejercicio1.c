/*Victor Seiji Nieto Morita
clase 7 ejercicio 1*/

#include <stdio.h>
#define dim 20

void main()
{
 int arr[dim], num, i, j;

  i = 0;
do
  {
   printf("\nDame un numero entero: ");
   scanf("%d", &num);

   if(num != 0) 
   {
    i = i + 1; 
    arr[dim - i] = num;
   }  
  }
 while ((num != 0) && (i < 20));

 if(i > 0)
  {
   printf("Los valores introducidos son: \n");
   for(j = dim - 1; j < dim - i; j --) 
     {
      printf("%d\t", arr[j]);
     }
  } 
 else
 { 
  printf("No ha introducido ningun valor\n");
 }  
 printf("\n");
}
