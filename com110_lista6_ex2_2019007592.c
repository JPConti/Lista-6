#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#define TM 8
#define TA 8

int main(){
  char gab[TM];
  int alunos[TA], nota[TA];
  int totalNota = 0;

  for(int x= 0 ; x< TM; x++){
    printf("Resposta Questão %d: ", x+1);
    gab[x] = toupper ( getch() );
    printf("\n");
  }

    for(int x = 0 ; x < TA; x++){
      printf("Informe o número do aluno: ");
      scanf("%d", &alunos[x]);
      totalNota = 0;
    
        for( int a = 0; a < TM; a++){
            printf("Resposta questao %d: ", a+1);
        if( gab[a] == toupper ( getch() ) ){
              totalNota++;
        }
        printf("\n");
      }
      nota[x] = totalNota;
    }
    for(int a = 0; a < TA; a++){
      printf("Aluno %d nota = %d\n", alunos[a], nota[a]);
      if(nota[a] >= 6 ){
        aprovados++;
      }
    }
    printf("%% de aprovados = %f", (aprovados * 100)/TA);
}
