#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct produto{
    int codigo;
    char nome[200];
    float preco;
}produto;

int main(int argc, char *argv[]){
    produto p;
    if(argc != 4){
        printf("Numro errado de parametros");
    }else{
        p.codigo = atoi(argv[1]);
        strcpy(p.nome, argv[2]);
        p.preco = atof(argv[3]);

        printf("%d , %s, %.2f", p.codigo, p.nome, p.preco);
    }
}