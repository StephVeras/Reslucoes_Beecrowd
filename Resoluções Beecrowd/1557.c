#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int first = 1, quociente, tamanho = 0;

    do{
        scanf("%d", &n);
        if (n==0) break;
        tamanho = 0;
        int matriz[15][15];

        for(int i = 0; i< n; i++){
            for(int j=0;j<n;j++){
                matriz[i][j] = (int)pow(2, i+j);
            }
        }
        quociente = matriz[n-1][n-1];

        do{
            quociente = quociente /10;
            tamanho++;
        }while(quociente !=0);

        for(int i = 0; i< n; i++){
            for(int j=0;j<n;j++){
                if(j ==0) {
                    printf("%*d", tamanho, matriz[i][j]);
                } else{
                    printf(" %*d", tamanho, matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    } while(n != 0);
    return 0;
}