#include<stdio.h>
#include<stdlib.h>

int main(){
    int *v[5];
    int a = 5;
    v[0] = malloc(sizeof(int));
    *v[0] = 10;
    v[1] = &a;

    printf("%d\n", *v[0]);
    printf("%d\n", *v[1]);

    return 0;
}