#include <iostream>
#include <math.h>
using namespace std;

/*1. Diseñar el algoritmo que me permita determinar 
el promedio obtenido por un graduado, quien es calificado 
por un jurado integrado con por 3 catedráticos 
(calificación de 0 a 20), el promedio se obtendrá descartando 
la nota discordante y promediando las notas restantes, si NO 
hay nota discordante se promedia entre las dos notas mayores.*/

int main(int argc, char** argv) {
 int nota1, nota2, nota3;
 cout << "ingrese las 3 notas" << endl;
 cin >> nota1;
 cin >> nota2;
 cin >> nota3;

 if(nota1 > nota2){
   int aux = nota1; 
   nota1 = nota2;
   nota2 = aux;
 }
 if(nota1 > nota3){
   int aux = nota1;
   nota1 = nota3;
   nota3 = aux;
 }
 if(nota2 > nota3){
   int aux = nota2;
   nota2 = nota3;
   nota3 = aux;
 }


 int discriminante1 = nota3 - nota2; // 20 - 15 = 5
 int discriminante2 = nota2 - nota1; // 15 - 5 = 10


 if(discriminante1 == discriminante2){
   float promedio = (nota2 + nota3) / 2;
   cout << "el promedio es: " << promedio << endl;
 }
 if(discriminante1 > discriminante2){
   float promedio = (nota1 + nota2) / 2;
   cout << "el promedio es: " << promedio << endl;
 }else{
   float promedio = (nota2 + nota3) / 2;
   cout << "el promedio es: " << promedio << endl; 
 }
	
	return 0;
}

