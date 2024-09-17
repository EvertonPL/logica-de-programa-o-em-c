#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
main(){

 int i,j,k;
 for(k=0;  k<=1;  k++){
    printf("\n");
    for(i=1;  i<5;  i++)
       printf(" TABUADA DO %d ",i+4*k+1);
    printf("\n");
    for(i=1;  i<=9;  i++){
       for(j=2+4*k;  j<=5+4*k;  j++)
           printf("  %d x %d = %2d  ", j, i, j*i);
       printf("\n");
    }
 }
}
