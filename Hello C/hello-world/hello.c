#include <stdio.h>

int main(){
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("digite sua altura: \n");
	scanf("%f", &altura);
	
	printf("Dados Informados: \n");
	printf("nome: %s \n",nome );
	printf("idade: %d \n", idade);
	printf("altura: %.2f \n", altura);
	
	system("pause");
	
	
	
}