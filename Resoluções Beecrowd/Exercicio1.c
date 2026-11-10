#include<stdio.h>
#include<string.h>

typedef struct _DataAdmissao{
    int dia;
    int mes;
    int ano;
}DataAdmissao;

typedef struct _Funcionario{
    char nome[200];
    char cargo[200];
    float salario;
    DataAdmissao data[200];
}Funcionario;

int main(){
    DataAdmissao data[200];
    Funcionario func[10];
    int opcao,a=0,cadRealizados=0,cadASerFeito, cadPossivel,qtdTotal=10;
    char nome[200];
    do{
        printf("--------------------------\n");
        printf("Menu\n\n");
        printf("Escolha uma opcao:\n");
        printf("1- Castrar\n");
        printf("2- Listar\n");
        printf("3- Buscar\n");
        printf("4- Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
        cadPossivel = qtdTotal -cadRealizados;
        if(cadRealizados<=cadPossivel){
                    printf("%d Cadastro:\nNome:\n", cadRealizados+1);
                    scanf("%s", func[cadRealizados].nome);

                    printf("\nCargo:\n");
                    scanf("%s", func[cadRealizados].cargo);

                    printf("\nSalario:\n");
                    scanf("%f", &func[cadRealizados].salario);

                    printf("\nDia de Admissao:\n");
                    scanf("%d", &func[cadRealizados].data[cadRealizados].dia);

                    printf("\nMes de Admissao:\n");
                    scanf("%d", &func[cadRealizados].data[cadRealizados].mes);

                    printf("\nAno de Admissao:\n");
                    scanf("%d", &func[cadRealizados].data[cadRealizados].ano);
                    cadRealizados++;
            }else{
                printf("so eh possivel realizar %d cadastros no total\nQuantidade de cadastros disponiveis:%d\n", qtdTotal,cadPossivel);
            }
            break;

            case 2:
            for(int i=0; i<cadRealizados; i++){
                printf("Cadastro %d\n", i+1);
                printf("%s\n", func[i].nome);
                printf("%s\n", func[i].cargo);
                printf("%.2f\n", func[i].salario);
                printf("%d/%d/%d\n\n", func[i].data[i].dia, func[i].data[i].mes, func[i].data[i].ano);
            }
            break;

            case 3:
            //printf("%d \n %d", strlen (func[0].nome), strlen(func[1].nome) );
            printf("Digite o nome buscado:\n");
            fgets(nome,sizeof(nome), stdin );
            while(nome[a] != '\0'){
                if(nome[a] == '\n'){
                    nome [a] = '\0';
                }
                a++;
            }
            for(int i=0; i<strlen(nome); i++){
            a = strcmp(nome, func[i].nome);
            if (a==0){
                printf("Cadastro %d\n", i+1);
                printf("%s\n", func[i].nome);
                printf("%s\n", func[i].cargo);
                printf("%.2f\n", func[i].salario);
                printf("%d/%d/%d\n\n", func[i].data[i].dia, func[i].data[i].mes, func[i].data[i].ano);
            }
            }
            break;

            case 4:
            break;
        
        default:
        printf("Opção Inválida");
            break;
        }
    }while(opcao !=4);
}
/*
#include<stdio.h>
#include<string.h>

typedef struct _data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct _Funcionario{
    char nome[200];
    char cargo[200];
    float salario;
    data data[10];
}Funcionario;

int main(){
    Funcionario f[10];
    int cont;

    fgets(f[cont].nome, sizeof(f[cont].cargo), stdin);
}




for(int i=0; i<qtd; i++){
        printf("%d Cadastro:\nNome:\n", i);
        scanf("%s", func[i].nome);

        printf("\nCargo:\n");
        scanf("%s", func[i].cargo);

        printf("\nSalario:\n");
        scanf("%f", func[i].salario);

        printf("\nDia de Admissao:\n");
        scanf("%d", func[i].data[i].dia);

        printf("\nMes de Admissao:\n");
        scanf("%d", func[i].data[i].mes);

        printf("\nAno de Admissao:\n\n");
        scanf("%d", func[i].data[i].ano);
    }


*/



