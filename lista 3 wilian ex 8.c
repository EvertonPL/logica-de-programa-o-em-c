#include<stdio.h>

int main(){
    int num, maior = -30000, menor = 30000, i, numpr, div;
    float soma = 0, somap = 0, media, mediap, porci, a, b, cont = 0, conti = 0, contp = 0, somapr = 0;

    do{
        printf("Digite um valor inteiro (ou '30000' para sair): ");
        scanf("%d", &num);
        if(num < 30000){
            cont++;
            soma = soma + num;
            media = soma / cont;

            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }

            if(num % 2 == 0){
                somap = somap + num;
                contp++;
                mediap = somap / contp;
            } else {
                conti++;
            }
        }
    }while(num < 30000);

    porci = (conti / (float)cont) * 100;

    printf("A soma dos numeros digitados foi: %.2f\n", soma);
    printf("A quantidade de numeros foi: %.2f\n", cont);
    printf("A media dos numeros digitados: %.2f\n", media);
    printf("O maior numero digitado: %d\n", maior);
    printf("O menor numero digitado: %d\n", menor);
    printf("A media dos numeros pares: %.2f\n", mediap);
    printf("A percentagem dos numeros impares entre todos os numeros digitados: %.2f%%\n", porci);

    return 0;
}
