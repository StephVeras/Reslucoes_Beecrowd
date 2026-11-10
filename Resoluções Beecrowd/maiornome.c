#include<stdio.h>
#include<stdlib.h>

char** nomeM(char** m, char** n, char** o){
    **m = "Joao";
    **n = "Maria";
    **o = "Josefina";
    
    return **m, **n, **o;
}

int main(){
    char* x, *y, *z,*maior;
    printf("%c %c %c", (nomeM(&*x, &*y, &*z))) ;
    

    return 0;
}