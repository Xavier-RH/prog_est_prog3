/* Autor: Xavier Romero Hernández, Realizado: 03/02/2022 
	programa que pida los datos de un triangulo y calcule su area.
	*/

#include <stdio.h>


int main (){
	int altura,base;
	float area;
	
	printf("Calcular el area de un triangulo\n");
	printf("introduce la base: ");
	scanf("%d",&base);
	printf("introduce la altura: ");
	scanf("%d",&altura);
	
	area=((float)base*altura)/2;
	
	printf("\nEl area del triangulo es de %.2f cm2",area);
	
	return 0;
}
