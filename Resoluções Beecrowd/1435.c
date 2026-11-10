#include <stdio.h>
 
int main() {
    int n, e, x = 1;
    do{
        scanf("%d", &n);
        if(n==0) break;
        int matriz[n][n];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                e = i + 1;
                if( j + 1 < e) e = j + 1;
                if(n - i < e) e = n - i;
                if(n - j < e) e = n - j;
                matriz[i][j] = e;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               printf("%3d", matriz[i][j]); 
               if(j < n - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }while(n!=0);
    return 0;
}