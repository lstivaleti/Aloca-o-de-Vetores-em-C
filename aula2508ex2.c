#include <stdio.h>
#include <stdio.h>
void main() {
	int m = 10, n, o;
	int *z = &m;
	 
	printf("Ponteiro: Exibindo declaracao basica de ponteiro: \n");
	
	printf("----------------------------------------------- \n");
	
	printf("Aqui esta m = %d, n e o sao duas variaveis inteiras e *z eh um inteiro\n\n", m);
	
	printf("z armazena o endereco de m = %p\n\n", &z);
	
	printf("*z armazena o valor de m = %i\n\n", *z);
	
	printf("&m eh o endereco de m = %p\n\n", &m);
	
	printf("&n armazena endereco de n = %p\n\n", &n);
	
	printf("&o armazena endereco de o = %p\n\n", &o);
	
	printf("&z armazena endereco de z = %p\n\n", &z);
	
	return 0;
}
