/*
#include <stdio.h>
 
int main() {
    int n[5];
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;
    
    for (int i = 0; i<5 ; i++) {
        scanf("%d", &n[i]);
        
        if (n[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
        if (n[i] > 0){
            positivo++;
        }else  if (n[i] != 0){
            negativo++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}
*/

#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);
    if (x % 2 == 0) {
        x++;
    }
    for (int i = 0; i <6; i++){
        printf("%d\n", x);
        x += 2;
    }
    return 0;
}