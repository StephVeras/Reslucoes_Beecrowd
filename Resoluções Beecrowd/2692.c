#include <stdio.h>
#include<string.h>
 
int main() {
    int l, f, original, trocado;
    char alfabeto[93], frase[500];
    scanf("%d %d", &l, &f);
    
    for(int i = 0; i < 93; i++){
        alfabeto[i] = i + 33;
        //printf("%c", alfabeto[i]);
    }
    for(int i=0; i<l; i++){
        scanf("%c %c", &original, &trocado);
        alfabeto[original-33]= trocado;
        alfabeto[trocado-33]= original;
    }
    for(int i = 0; i < f; i++){
        scanf(" %c", &frase[i]);
       
        for(int j = 0; j < strlen(frase); j++){
            if(frase[j] >= 33 && frase[j] <= 126)
                frase[j] = alfabeto[ frase[j] - 33 ];
        }

        printf("%s\n", frase);
    }
    return 0;
}