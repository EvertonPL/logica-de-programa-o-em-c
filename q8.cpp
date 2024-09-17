#include<stdio.h>

main(){
	int num, maior = -30000, menor = 30000, i, numpr, div;
	float soma = 0, somap = 0, media, mediap, porci, a, b, cont = 0, conti = 0, contp = 0, somapr = 0; 
	
	do{	
	printf("Digite um valor inteiro: ");
	scanf("%d", &num);
	if(num < 30000){
		cont++;
		soma = soma + num;
		media = soma / cont;
		if(num % 2 == 0){
			somap = somap + num;
			contp++;
			mediap = somap / contp;
			}
		}
	}while(num<30000);
	printf("A soma dos numeros digitados foi: %f\n", soma);
	printf("A quantidade de numeros foi: %d\n", cont);
	printf("A media dos numeros digitados: %f\n", media);
}
