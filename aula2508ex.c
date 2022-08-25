#include <stdio.h>
#include <stdio.h>
void main() {
	int i;
	int *v;
	v = (int *)malloc(sizeof(int) * 10); //v é um ponteiro para ma area que tem 10 inteiroos, funciona como um vetor
	
	v[0] = 10;
	v[1] = 11;
	v[2] = 12;
	v[3] = 13;
	v[4] = 14;
	v[5] = 15;
	v[6] = 16;
	v[7] = 17;
	v[8] = 18;
	v[9] = 19;
	
	for (i = 0; i < 10; i++){
		printf("v[%d]: %d \n", i, v[i]);
	}
	printf("Endereco de 'v': %p", v);
	free(v);
	return 0;
}
