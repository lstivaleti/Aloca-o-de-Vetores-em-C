#include <stdio.h>
#include <stdlib.h>
long somaDoisNumeros(long *, long *);
int main() 
{	
	long primeiroNumero, segundoNumero, soma; 
	printf("\n\nPonteiro: Adicionar dois n�meros usando chamada por referencia: \n");
	printf("------------------------------------------\n");
	printf("Digite o primeiro n�mero: " ); 
	scanf("%ld", &primeiroNumero);
	printf("Digite o segundo numero: ");
	scanf ("%ld", &segundoNumero);
	soma = somaDoisNumeros(&primeiroNumero, &segundoNumero);
	printf("A soma de %ld e %ld � %ld \n\n", primeiroNumero, segundoNumero, soma);
	return 0;
}
long somaDoisNumeros(long *n1, long *n2){
	long soma;
	soma = *n1 + *n2;
	return soma;
}

