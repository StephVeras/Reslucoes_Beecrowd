#include<stdio.h>
#include<string.h>

typedef struct Aluno{
    char nome[200];
    int matricula;
    float notas[5]; 
} aluno;

int main(){
    aluno a[5];
    int opc, b =0, cadRealizados=0,cadASerFeito, cadPossivel,qtdTotal=5;
    float media[5];

    do{
        printf("--------------------------\n");
        printf("Menu\n\n");
        printf("Escolha uma opcao:\n");
        printf("1- Castrar\n");
        printf("2- Calcular media\n");
        printf("3- Lista Aprovados\n");
        printf("4- Sair\n");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                cadPossivel = qtdTotal -cadRealizados;
                if(cadRealizados<=cadPossivel){
                    printf("%d Cadastro:\nNome:\n", cadRealizados+1);
                    scanf("%s", a[cadRealizados].nome);

                    printf("\nNumero da Matricula\n");
                    scanf("%d", &a[cadRealizados].matricula);

                    printf("\nNotas:\nPrimeira nota:\n");
                    scanf("%f", &a[cadRealizados].notas[0]);
                    printf("Segunda nota\n");
                    scanf("%f", &a[cadRealizados].notas[1]);
                    printf("Terceira nota\n");
                    scanf("%f", &a[cadRealizados].notas[2]);
                    printf("Quarta nota\n");
                    scanf("%f", &a[cadRealizados].notas[3]);
                    printf("Quinta nota\n");
                    scanf("%f", &a[cadRealizados].notas[4]);

                    media[cadRealizados] = (a[cadRealizados].notas[cadRealizados] + a[cadRealizados].notas[1] + a[cadRealizados].notas[2] + a[cadRealizados].notas[3] + a[cadRealizados].notas[4])/5;

                    cadRealizados++;
                    }else{
                        printf("so eh possivel realizar %d cadastros no total\nQuantidade de cadastros disponiveis:%d\n", qtdTotal,cadPossivel);
                    }
                break;

            case 2:
            printf("Digite o numero de matricula do aluno:\n");
                scanf("%d", &b);
                    for(int i=0; i< cadRealizados; i++){
                        if( a[i].matricula == b ){
                            printf("%.1f\n", media[i]);
                        }
                    }
                break;
            
            case 3:
            printf("Alunos aprovados:\n");
            for (int i=0; i< cadRealizados; i++){
                if(media[i] >= 7.0){
                    printf("%s\n", a[i].nome);
                }
            }
                break;
        
            case 4:
                break;
            
            default:
                printf("Opcao invalida");
        }
    }while(opc != 4);
    return 0;
}