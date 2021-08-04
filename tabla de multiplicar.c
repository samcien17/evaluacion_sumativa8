#include <stdio.h>


int main() {
    int valor;
    int cont=1,mul;
    printf("introdusca numero para ver su tabla de multiplicar:");
    scanf("%d",&valor);
    printf("\n");
    while(cont<=10){
        mul=valor*cont;
    printf(" %d x %d = %d\n",valor,cont,mul);
    cont++;}

    return 0;

}

