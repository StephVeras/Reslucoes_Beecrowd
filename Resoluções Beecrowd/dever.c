#include <stdio.h>
#include <math.h>
 
int main() {
    float a, b, c, A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    if (A>= B && B>= C) {
        a= A;
        b =B;
        c = C;
    }
    if (A>= C && C>=B ) {
        a= A;
        b = C;
        c = B;
    }
    if (B>= A && A>=C ) {
        a= B;
        b = A;
        c = C;
    }
    if (B>= C && C>=A ) {
        a= B;
        b = C;
        c = A;
    }
    if (C>= A && A>=B ) {
        a= C;
        b = A;
        c = B;
    }
    if (C>= B && B>=A ) {
        a= C;
        b = B;
        c = A;
    }

    if (a>= (b+c)){
        printf("NAO FORMA TRIANGULO\n");


    } else if (pow(a,2) == pow(b,2) + pow(c,2)) {
        printf("TRIANGULO RETANGULO\n");
        if (a == b || a ==c || b==c) {
        printf("TRIANGULO ISOSCELES\n");
        }


    } else if (pow(a,2) > pow(b,2) + pow(c,2)) {
        printf("TRIANGULO OBTUSANGULO\n");
        if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || a ==c || b==c) {
            printf("TRIANGULO ISOSCELES\n");
        }


    } else if (pow(a,2) < pow(b,2) + pow(c,2)) {
        printf("TRIANGULO ACUTANGULO\n");
        if (a == b  && b== c) {
        printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || a ==c || b==c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
   
    return 0;
}
