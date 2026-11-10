#include<stdio.h>
#include<string.h>

typedef struct Produto{
    int codigo;
    char desc[200];
    int qtd;
    float preco;
} produto;

int main(){
    produto p[20];
    int opc,a =0,nova, cadRealizados=0,cadASerFeito, cadPossivel,qtdTotal=20;
    do{
        printf("--------------------------\n");
        printf("Menu\n\n");
        printf("Escolha uma opcao:\n");
        printf("1- Castrar\n");
        printf("2- Alterar estoque\n");
        printf("3- Relatorio\n");
        printf("4- Sair\n");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                cadPossivel = qtdTotal -cadRealizados;
                if(cadRealizados<=cadPossivel){
                    printf("%d Cadastro:\nCodigo:\n", cadRealizados+1);
                    scanf("%d", &p[cadRealizados].codigo);

                    printf("\nDescricao:\n");
                    scanf("%s", p[cadRealizados].desc);

                    printf("\nQuantidade em Estoque:\n");
                    scanf("%d", &p[cadRealizados].qtd);

                    printf("\nPreco unitario:\n");
                    scanf("%f", &p[cadRealizados].preco);

                    cadRealizados++;
                    }else{
                        printf("so eh possivel realizar %d cadastros no total\nQuantidade de cadastros disponiveis:%d\n", qtdTotal,cadPossivel);
                    }
                break;

            case 2:
                printf("Digite o codio do produto a ser alterado:\n");
                scanf("%d", &a);
                    for(int i=0; i< cadRealizados; i++){
                        if( p[i].codigo == a ){
                            printf("Quantidade atual de estoque: %d\n", p[i].qtd);
                            printf("Digite nova quantidade de estoque:\n");
                            scanf("%d", &nova);
                            p[i].qtd = nova;
                        }else{ 
                            printf("Produto nao encontrado\n");
                        }
                    }
                break;

            case 3:
                for(int i=0; i< cadRealizados; i++){
                    printf("Codigo do produto %d\n", p[i].codigo);
                    printf("Quantidade total em estoque: %d\n\n", p[i].qtd );
                }
                break;

            case 4:
                break;

            default:
                printf("Opcao invalida\n");
                break;
        }
    }while(opc != 4);
    return 0;
}