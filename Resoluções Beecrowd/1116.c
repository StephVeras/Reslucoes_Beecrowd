#include <stdio.h>
 
int main() {
    int x,y;
    float result;
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        }else{
            result = (float)x/(float)y;
            printf("%.1f\n", result);
    }
    }
    return 0;
}