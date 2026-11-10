#include <stdio.h>
 
int main() {
    int codigo, quantidade;
    float preco = 1;
    float total;
    scanf("%d, %d", codigo, quantidade);
    printf("Total: R$ %.2f\n", preco);

    switch (codigo) {
        case 1:
        total = quantidade * 4.00;
        break;
        case 2:
        total = quantidade * 4.50;
        break;
        case 3:
        total = quantidade * 5.00;
        break;
        case 4:
        total = quantidade * 2.00;
        break;
        case 5:
        total = quantidade * 1.50;
        break;
        default: break;
    }
    printf("Total: R$ %.2f\n", preco);

    return 0;
}
/*
    if (codigo == 1) {
        preco = quantidade * 4.00;
        printf("Total: R$ %.2f\n", preco);
    } else if (codigo == 2){
        preco = quantidade * 4.50;
        printf("Total: R$ %.2f\n", preco);
    } else if (codigo == 3){
        preco = quantidade * 5.00;
        printf("Total: R$ %.2f\n", preco);
    } else if (codigo == 4){
        preco = quantidade * 2.00;
        printf("Total: R$ %.2f\n", preco);
    } else if (codigo == 5){
        preco = quantidade * 1.50;
        printf("Total: R$ %.2f\n", preco);
    }
    */