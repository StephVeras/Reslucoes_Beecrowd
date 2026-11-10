#include<stdio.h>
#include<string.h>

int main(){
    char frase[200];
    int a=0,opcao;

    printf("Digite uma string:\n");
    fgets(frase, sizeof(frase), stdin);

    while(frase[a] != '\0'){
        if(frase[a] == '\n'){
            frase[a] = '\0';
        }
        a++;
    }

    printf("Escolha a conversao:\n1 para MAIUSCULAS\n2 para minusculas\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
                for(int i =0; i<strlen(frase); i++){
                    if(frase[i] > 96){
                        frase[i] -= 32;
                    } 
                }
                break;
        case 2:
            for(int i =0; i<strlen(frase); i++){
                if(frase[i] < 91){
                    frase[i] += 32;
                } 
            }
            break;
        
        default:
            break;
    }
    
    printf("String convertida: %s\n", frase);
    return 0;
}