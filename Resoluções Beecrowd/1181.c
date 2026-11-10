#include<stdio.h>

int main(){
    int n;
    float soma = 0;
    char l;
    float matriz[12][12];

    scanf("%d", &n);
    getchar();
    scanf("%c", &l);

    for(int i=0; i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int j = 0; j<12; j++){
        soma += matriz[n][j];
    }

    if(l == 'S'){
        printf("%.1f\n", soma);
    } else if(l == 'M'){
        soma /= 12;
        printf("%.1f\n", soma);
    }

    return 0;
}