#include <stdio.h>
 
int main() {
    int n, np=0, p=0;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n;i++){
        scanf("%d", &vet[i]);
        for (int j=2; j<vet[i];j++){
            if (vet[i]%j ==0){
                np++;
            }
        }
        if(np==0){
            printf("%d eh primo\n", vet[i]);
        } else{
            printf("%d nao eh primo\n", vet[i]);
        }
        np=0;
    }
    return 0;
}