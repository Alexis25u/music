R#include <stlib.h>
#include <stdio.h>
#include <conio.h>


typedef struct a  //se cargan datos hasta que de cero.
{
int legajo;
char nombre[100];
int nota;
}alumno;

//se guarda un registro alum en /legajo /nombre /nota
//*alum puntero
//se carga y se graba hasta que ingrese 0

//la estructura stdlib es file

void main()
{
file *pf;
//La funci¢n para abrir el archivo.
pf=fopen("c:\\nombres.dat","wb+");//tiene dos parametros 1ro path o ruta del archivo binario.
//2do parametro el permiso o el modo de acceso a ese archivo.Leer, escribir, o leer y escribir.
// r=read / w=write  / a=append
// leer   / escribir / agregar
// se le agrega una .b  rb wb ab
// r+b= o rb+  lectura y escritura
// w+b  o wb+  escribir y leer  /si el archivo no existe lo Crea.
// Se agrega un if
if(pf==NULL)
{
printf("No se pudo abrir");
exit(1);
}

}
// 100 pepe 7
// 102 Luis 6
// 101 Juan 4

// 1 ubicar el cursor del archivo al principioo
// 2 Leer un registeo.

// el cursor se posiciona en el siguiente registro
//existe la funcion fseek que tiene 3 parametros.
fseek(pf,0L,SEEK_SET)//1ro en que archivo , el puntero pf. /2do cuantos bytes
-1L //se mueve un registro para atras.
//el tercero es SEEK_SET posicionate al principio ,
//SEEK_END posicionate al final del archivo,
//-1L SEEK_CUR posicionate en la registro ultima que tuvo el cursor, posicionate para atras.
// fseek reubica el cursor
fwrite(&variable,sizeof(alumno),1,pf);//consta de 4 parametros.
(&variable//el primer parametro es la division de memoria de una variable
sizeof(alumno)// el segundo es cuantos bytes tiene el archivo , ocupa 108
1//tercer parametro, cuantos registros voy a grabar.
pf//el cuarto parametro es donde se guarda, el parametro.

fread(&variable,sizeof(alumno),1,pf);//
(&variable//direccion de la variable donde voy a leer el archivo.
sizeof(alumno)
1//cuantos parametros voy a leer.
pf//el parametro que se guarda el archivo

fclose(pf);//cierra el archivo, antes del getch
while(!feof(pf));//mientras no sea fin de archivo.
		 //mostrar el contenido uno por uno Lectura secuencial
feof//end of file o Fin del archivo

ftell(pf)//nos informa la cantidad de bytes del archivo.
ftell(pf)/sizeof(alumnno)//cantidad de registros.





