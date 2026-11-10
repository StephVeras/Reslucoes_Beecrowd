#include <stdio.h>
#include <string.h>

 
int main() {
    int n;
    char first[51], second[51], new[102];

    scanf("%d", &n);

    for(int i = 0; i< n; i++){
        scanf("%s %s", first, second);
        size_t tam1 = strlen(first);
        size_t tam2 = strlen(second);
        int k = 0;

        for(int j=0;j<tam1 || j< tam2; j++){
            if(j<tam1){
                new[k++] = first[j];
            }
            if(j<tam2){
                new[k++] = second[j];
            }
        }
        new[k] ='\0';
        printf("%s\n", new);
    }
    return 0;














    /*int qtd, x=0, n=0, q=0, y, z, w = 0;
    char first[200], second [200];
    
    scanf("%d", &qtd);
    
    while(x < qtd){
        q=0;
        //getchar();
        scanf("%s", first);
        scanf("%s", second);
        n = strlen(first);
        y = strlen(second);
        z = n +y;
        char new[z];
        
        for(int i= 0; i < strlen(second); i+ 2){
            new[w] = first[q];
            new[++w] = second[q];
            
            if(first[q] == '\0' && second[q] != '\0'){
                new[w] = second[q];
                q++;
            }
            if(first[q] =='\0' && second[q] == '\0'){
                break;
            }
            q++;
            w++;
        }

        printf("%s\n", new);
        x++;
    }*/
    return 0;
}