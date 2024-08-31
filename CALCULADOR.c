#include<stdio.h>
#include <locale.h>

void PedirDatos();
void Suma();
void Resta();
void Multiplicacion();
void Division();

float  numero;
float numero2;

int main(){
	setlocale (LC_ALL,"spanish");
	PedirDatos();
	Suma();
	Resta();
	Multiplicacion();
	Division();
}
void PedirDatos(){
	
	printf("ingresa un número:");
	scanf ("%f",&numero);
	
	printf ("ingresa otro número:");
	scanf ("%f",&numero2);
	
}
//suma
void Suma(){
	float Resultado;
	Resultado=numero+numero2;
	printf("el valor de la suma es:%f\n", Resultado);
}
//resta
void Resta(){
	float Resultado;
	Resultado=numero-numero2;
	printf("el valor de la resta es:%f\n", Resultado);
}
//multiplicación
void Multiplicacion(){
	float Resultado;
	Resultado=numero*numero2;
	printf("el valor de la multiplicación es:%f\n", Resultado);
}
//División
void Division(){
	float Resultado;
	Resultado=numero/numero2;
	printf("el valor de la división es:%f\n", Resultado);
}
