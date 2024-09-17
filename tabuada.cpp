#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
int main(){
	 int num, i;
	 char j;
do{
 printf("Numero de 1 a 10: ");
 scanf("%d",&num);
 printf("\n TABUADA DO %d\n\n",num);

 for(i=1;  i<=10;  i++)
  {
     printf(" %d x %d = %2d\n",num, i, num*i);
  }
  printf("Deseja continuar:  (S/N)");
  scanf("%s", &j);
}while(j!= 'n' || j!= 'N');
	return 0;
}
