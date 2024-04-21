#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 5
#define M 12

void cargarDatos(int *matrizDinamica);
void mostrarDatos(int *matrizDinamica);
void Promedio(int *matrizDinamica,int promedio);
void MaxMin(int *matrizDinamica, int mn, int pn);


int main(){

int acum=0;
int promedio=0;
int *matrizDinamica= (int *) malloc(sizeof(int)*M*N);


 cargarDatos(matrizDinamica);
 mostrarDatos(matrizDinamica);
 Promedio(matrizDinamica,promedio);

int mn=0;
int pn=49999;
int mes=1;
int anio=1;

MaxMin(matrizDinamica,  mn,  pn);





return 0;

 }


void cargarDatos(int *matrizDinamica){

srand(time(NULL));

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 12; j++)
    {
        

     *((matrizDinamica + i * M) +j ) = 1+rand()%41000+10000;
  

    }


} 





}
 
void mostrarDatos(int * matrizDinamica){


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 12; j++)
    {
        

    
     printf("%4d", *((matrizDinamica +i *M)+j));
    printf(" - ");
    }
   
   printf("\r\n");

} 


 }


 void Promedio(int *matrizDinamica, int promedio){

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 12; j++)
    {
        

    
    promedio += *((matrizDinamica +i *M)+j);
 
    }


    printf("El promedio del anio %d es %d",i+1,promedio/12);
    promedio=0;
   
   printf("\r\n");

} 




 }


 void MaxMin(int *matrizDinamica, int mn, int pn){

 mn=0;
 pn=49999;
int mes, anio;
int mes2, anio2;

for (int i = 0; i < 5; i++)
{
   for (int j = 0; j < 12; j++)
   {
    
        if (*((matrizDinamica + i * M) +j ) > mn)
        {
            mn=*((matrizDinamica + i * M) +j );

            mes=j+1;
            anio=i+1;
       
        }
   
   }
   
}
 
 for (int i = 0; i < 5; i++)
 {
    for (int j = 0; j < 12; j++)
    {
        if (*((matrizDinamica + i * M) +j ) <pn)
        {
            pn=*((matrizDinamica + i * M) +j );

            mes2=j+1;
            anio2=i+1;
       
       
        }
    }
    
 }
 
printf("el valor mas alto fue %d en el mes %d del anio %d\n",mn,mes,anio);

printf("El valor mas bajo fue: %d en el mes %d del anio %d\n",pn,mes2,anio2);
   




 }