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
	
	printf("ingresa un n�mero:");
	scanf ("%f",&numero);
	
	printf ("ingresa otro n�mero:");
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
//multiplicaci�n
void Multiplicacion(){
	float Resultado;
	Resultado=numero*numero2;
	printf("el valor de la multiplicaci�n es:%f\n", Resultado);
}
//Divisi�n
void Division(){
	float Resultado;
	Resultado=numero/numero2;
	printf("el valor de la divisi�n es:%f\n", Resultado);
}
