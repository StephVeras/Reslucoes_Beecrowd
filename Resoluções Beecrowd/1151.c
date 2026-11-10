#include <stdio.h>
 
int main() {
    int n, a=0, b=1, c, count = 0;
    scanf("%d", &n);
    printf("0 1 ");
    do{
        c= a +b;
        printf("%d",c);
        
        a =b;
        b = c;
        count++;
        if(count<n-2){
          printf(" ");
        }
    }while(count<n-2);
    printf("\n");
    return 0;
}