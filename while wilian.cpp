#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
main(){
int n,  i,  num,  soma=0;

 printf("Entre com a quantidade: ");
 scanf("%d",&n);
 i = 0;
 while(i<n)
{
    scanf("%d",&num);
    soma += num; // soma = soma + num;
    i++; // i = i + 1;
 }
 printf("Soma: %d\n",soma);
}

