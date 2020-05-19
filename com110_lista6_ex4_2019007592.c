#include <conio.h>
#include <stdio.h>
int main()
{
 int i, v[10], v_aux;
 for (i = 0; i < 10; i++)
 {
  printf("Informe o valor de Vetor[%d]: ", i+1);
  scanf("%d", &v[i]);
 }
 printf("Vetor:");
 for (i = 0; i < 10; i++){
     printf(" %d ", v[i]);

 v_aux = v[i];
 }

 printf("\nVetor Invertido:");

 v_aux-- ;
 for (i = v_aux ; i >= 0 ; i--){
 printf(" %d ", v [i]);
 }
getche();
}
