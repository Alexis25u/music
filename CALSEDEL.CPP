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
struct alumno a;
printf("\n Ingrese legajo:");
scanf("%d",&a.legajo);
fflush(stdin);

printf("\n Ingrese nombre:");
gets(a.nombre);
fflush(stdin);

printf("Ingese nota:");
scanf("%d",&a.nota);
printf("\n legajo: %d",a.legajo);
printf("\n Ingrese nombre:");
puts(a.nombre);
printf("\n nota:%d",a.nota);
getch();
}