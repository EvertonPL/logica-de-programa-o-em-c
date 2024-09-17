#include<stdio.h>

main(){
	
	float n, k=1;
	int i;
	
	printf("Digite um valor: ");
	scanf(" %f", &n);
	
	for(i=0;i<12;i++){
		k=(k+(n/k))/2;
		printf("O %2d valor da raiz aproximado eh: %.30f\n", i+1, k);
	}	
}
