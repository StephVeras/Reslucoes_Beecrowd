 #include <stdio.h>
 
 int main(){
    int n1, n2, n3, n4, n5, par = 0, impar = 0, positivo =0, negativo =0;
 if (n1 % 2 == 0) {
        par++;
    } else {
        impar++;
    }
     if (n2 % 2 == 0) {
        par++;
    } else {
        impar++;
    }
     if (n3 % 2 == 0) {
        par++;
    } else {
        impar++;
    }
     if (n4 % 2 == 0) {
        par++;
    } else {
        impar++;
    }
     if (n5 % 2 == 0) {
        par++;
    } else {
        impar++;
    }
        
    if (n1 > 0){
        positivo++;
    }else {
        negativo++;
    }
    if (n2 > 0){
        positivo++;
    }else {
        negativo++;
    }
    if (n3 > 0){
        positivo++;
    }else {
        negativo++;
    }
    if (n4 > 0){
        positivo++;
    }else {
        negativo++;
    }
    if (n5 > 0){
        positivo++;
    }else {
        negativo++;
    }
 }