#include <stdio.h>
#include<string.h>
 
int main() {
    int qtd, x;
    char codigo[50];

    scanf("%d", &qtd);

     for(int i=0; i< qtd; i++){
        scanf("%s", codigo);
        scanf("%d", &x);

        size_t frase = strlen(codigo);

        for(int j=0; j< frase; j++){
            codigo[j] = codigo[j] - x;
            if(codigo[j] < 'A'){
                codigo[j] += 26;
            }
        }
        printf("%s\n", codigo);
     }

   /* char alfa[52];
    for(int i=0; i< 26; i++){
        alfa[i] = 65 +i;
    }for(int i=26; i< 52; i++){
        alfa[i] = 65 +(i - 25);
    }

    scanf("%d", &qtd);

    while(qtd != 0){
        //ler string
        scanf("%s", codigo);

        scanf("%d", &x);
    
        for(int i=0; i< strlen(codigo); i++){
            printf("a%c\n", codigo[i]);
            codigo[i] = alfa[codigo[i] - x];
            printf("b%c\n", codigo[i]);
        }

        printf("%s", codigo);
        qtd--;
    }*/
    return 0;
}
