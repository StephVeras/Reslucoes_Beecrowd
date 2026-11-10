#include<stdio.h>
#include<stdlib.h>

int f1(int dias, int meses, int anos){
    dias+= (meses * 30) + (anos * 365);

    return dias;
}

int main(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    int diasTotal = f1(dia, mes, ano);

    printf("%d", diasTotal);
    return 0;
}