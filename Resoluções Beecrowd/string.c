#include<stdio.h>
#include<string.h>

int main(){
    int i=0;
	char nome[20], x[20];
    fgets(nome, 21, stdin);
    fgets(x, 21, stdin);

    while(nome[i] != '\0') {
        if(nome[i] =='\n')
            nome[i] = '\0'; 
        i++;
    }
    i=0;
    while(x[i] != '\0') {
        if(x[i] =='\n')
            x[i] = '\0';
        i++; 
    }
    
    i = strcmp(nome, x);

    if(i ==0){
        printf("Iguais\n");
    }else if( i< 0){
        printf("Diferentes. Primeira antes da segunda\n");
    }else{
        printf("Diferentes. Primeira depois da segunda\n");
    }
	return 0;
}

