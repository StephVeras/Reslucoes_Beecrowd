#include <stdio.h>
 
int main() {
    int n, in =0,out =0;
    scanf("%d", &n);
    int valor[n];
    for(int i=0;i<n;i++){
        scanf("%d", &valor[i]);
    }
    for(int i=0;i<n;i++){
        if(valor[i]<10 || valor[i] >20){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}