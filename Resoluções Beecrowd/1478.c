#include <stdio.h>
 
int main() {
    int qtd, n, x =0;
    
    do{
        
        scanf("%d", &qtd);
        n=qtd;

        for (int j=1; j<= qtd; j++){
            n = j;
            for(int i=1; i<= qtd; i++){
                
                if (n > 1 && x == 0){

                    printf("  %d", n);

                    if(i != qtd){
                        printf(" ");
                    }
                    n--;

                } else if(n == 1 || x != 0){
                    printf("  %d", n);

                    if(j != qtd){
                        printf(" ");
                    }
                    n++; x++;

                }
                
                    x==0;
            }
            if(j != qtd){
                        printf(" \n");
                    }
          x=0;  
        }
        printf("\n");
    }while(qtd != 0);
    return 0;
}