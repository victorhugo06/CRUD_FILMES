#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include "controller.c"


void cadastrar(locadora *f, int *search);
void pesquisar(locadora *f, int search);
void titulo(locadora *f, int search);
void genero(locadora *f,int search);
void avideo(locadora *f,int search);
void excluir(locadora *f, int search);
void alterar(locadora *f, int *search);
void listar(locadora *f, int search);

int main() //menu principal
{
srand(time(NULL));
int search=0;
int aux;
locadora f[100];
do{
printf("\n-------- CADASTRO DE FILMES --------\n\n");
printf("\t1.Cadastrar Video\n\t2.Pesquisar Video\n");
printf("\t3.Alterar Video\n\t4.Excluir Video\n");
printf("\t5.Listar filmes\n");
printf("\t6.Sair do Programa\n");
printf("\n\n> Opcao Escolhida:");
scanf("%d", &aux);
if(aux==6)
{
printf("\n---------------------------------------\n");
printf("\nPressione alguma tecla para sair.....\n");
}
else
{
switch(aux)
{
case 1:
cadastrar(f, &search);
break;
case 2:
pesquisar(f, search);
break;
case 3:
alterar(f, &search);
break;
case 4:
excluir(f, search);
break;
case 5:
listar(f, search);
break;
default:
printf("Opcao Invalida!");
}
}
getch();
}while(aux != 6);
return(0);
}
