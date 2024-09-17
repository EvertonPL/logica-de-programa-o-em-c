#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

main(){
	int i, ano;
	float sal = 1000, perc = 1.5;
	printf("Informe o ano atual: ");
	scanf("%d", &ano);
	
	for(i=2006; i<=ano; i++){
		if (i==2006)
          {
             sal = sal + (sal * perc)/100;
             printf("Salario em 2006 = %.2f \n\n", sal);
          }
        else
          {
             perc = (2 * perc);
             sal = sal + perc/100 * sal;
             printf("Percentual somado do  aumento foi: %.2f\n",perc );
             printf("Salario em %d foi igual a %.2f\n\n", i,sal);
    	  }
	}
	

	
	
	
	
	
	
}
