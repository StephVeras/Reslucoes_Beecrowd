#include <stdio.h>
 
int main() {
    int teste, x=0;
    float media;
    scanf("%d", &teste);
    float casos[3];
    while(x<teste){
    for(int i=0; i<3;i++){
        scanf("%f", &casos[i]);
    }
    media = ((casos[0]*2) + (casos[1] * 3) +(casos[2]* 5))/10;
    printf("%.1f\n", media);
    x++;
    }
    return 0;
}