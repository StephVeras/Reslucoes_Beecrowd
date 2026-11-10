#include <stdio.h>
 
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    if (x%2 != 0){
        x--;
    }
     if (y%2 == 0){
        y--;
    } 

    if (x == y || y == x -1) {
        printf("0\n");
    } else {
    for (int i= 0; i <= x ; i = y) {
        y = y + 2;
    } 
    y -= 2;
     printf("%d\n", y);
    }
   
    return 0;
}