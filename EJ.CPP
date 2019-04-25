#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct a
{
int legajo;
char nombre[100];
int nota;
}alumno;

void main()
{
   FILE *PF;
   alumno*alum;
   PF=open("C:\\alumnos.dat","w+b");
   if(pf==NULL)
   {
   printf("no se puede abrir.");
   exit(1);
   }
   alum=(alumno*)malloc(sizeof(alumno));
   //nos aseguramos que esta al prinicio del archivo.
   fseek(PF,OL,SEEK_SET);
   printf("\n ingrese un Legajo:");
   scanf("%d",&alum->legajo);

   while(alum->legajo!=0)
   {
   fflush(stdin);
   printf("\n Ingrese nombre:");
   gets(alum->nombre);
   fflush(stdin);
   printf("\n Ingrese nota:");
   scanf("%d",&alum->nota);

   //legajo 102 nombre pepe nota 7
   fwrite(alum,sizeof(alumno),1,PF);
   printf("\n Ingrese el legajo:");
   scanf("%d",&alum->legajo);
   }
   ///carga y lectura del archivo completada
   alumno*leo;
   fseek(PF,0L,SEEK_SET);// posiciono el cursor al principio
   leo=(alumno*)malloc(sizeof(alumno));

   fread(leo,sizeof(alumno),1,PF);
   while(!feof(PF));
   {
      printf("%d\t\t%s\t\t%d",leo->legajo,leo->nombre,leo->nota);
      fread(leo,sizeof(alumno),1,PF);
   }
   fclose(PF);
   getch();
}
