#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int primeiroNumero, segundoNumero, *ponteiroValor1, *ponteiroValor2, soma; 
	printf("\n\nUsando ponteiros: Somando dois n�meros: \n");
	printf("------------------------------------------\n");
	printf("Digite o primeiro n�mero: " ); 
	scanf("%d",&primeiroNumero);
	printf("Digite o segundo numero: ");
	scanf ("%d", &segundoNumero);
	ponteiroValor1 = &primeiroNumero; 
	ponteiroValor2 = &segundoNumero;
	soma = *ponteiroValor1 + *ponteiroValor2;
	printf("A soma dos valores digitados �: %d\n\n", soma);
	return 0;
}

