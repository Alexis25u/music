#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct alumno
{
int legajo;
char nombre[80];
int nota;
}alumno;

void main()
{
struct alumno *p;//al definir un puntero entero. tienen que usar una memoria de asignaci¢n.
p=(alumno*) malloc(sizeof(alumno));//si usamos typedef se usa tipo de dato
//no es int sino alumno solo porque uso el typedef sino struct alumno.
//Si el puntero se llama p el legajo es (*p) .legajo/p->legajo
// p->legajo cada vez que se define un puntero se pone p->campo
clrscr();
printf("\n Ingrese legajo:");
scanf("%d",&p->legajo);
fflush(stdin);
printf("\n Ingrese nombre:");
gets(p->nombre);
fflush(stdin);

printf("Ingrese nota:");
scanf("%d",&p->nota);

//imprimir lo que se ingres¢

printf("\n legajo: %d",p->legajo);
printf("\n Ingrese nombre:");

puts(p->nombre);
printf("\n nota:%d",p->nota);
getch();
}