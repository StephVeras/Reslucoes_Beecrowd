#include <stdio.h>
#include <string.h>
#include <sys/time.h>

int main() {
    char alfabeto[28], alfa[] = {"abcdefghijklmnopqrstuvwxyz"}; 
    struct timeval start, end;
    int igual, a=0;
    double tempo_gasto;

    do{
    printf("Digite o alfabeto de 'a' a 'z':\n");
    gettimeofday(&start, NULL);
    fgets(alfabeto, sizeof(alfabeto), stdin);
    gettimeofday(&end, NULL);
    tempo_gasto = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0;

    while(alfabeto[a] != '\0'){
        if(alfabeto[a] == '\n'){
            alfabeto[a] = '\0';
        }
        a++;
    }
    igual = strcmp(alfabeto,alfa);

    if (igual == 0){
        printf("Voce digitou corretamente.\n");
        printf("Tempo gasto: %f segundos\n", tempo_gasto);
    }else{
        printf("Voce digitou errado.\n");
    }
    }while(igual !=0);

   return 0;
}

