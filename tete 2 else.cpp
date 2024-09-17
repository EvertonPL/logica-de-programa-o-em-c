#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{
	float n1, n2, n3, n4;
	
	printf("Digite 3 numeros em ordem: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	printf("Digite um quarto numero: ");
	scanf("%f", &n4);
	
	if(n4 > n3)
		printf("Em ordem decrecente fica: %.1f\t%.1f\t%.1f\t%.1f\t", n4, n3, n2, n1);
	else if(n4 > n2 && n4 < n3)
		printf("Em ordem decrecente fica: %.1f\t%.1f\t%.1f\t%.1f\t", n3, n4, n2, n1);
	else if(n4 > n1 && n4 < n2)
		printf("Em ordem decrecente fica: %.1f\t%.1f\t%.1f\t%.1f\t", n3, n2, n4, n1);
	else
		printf("Em ordem decrecente fica: %.1f\t%.1f\t%.1f\t%.1f\t", n3, n2, n1, n4);
	
	
	
	
	
	
	
getch();
}
