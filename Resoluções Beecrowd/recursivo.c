#include<stdio.h>
#include<stdlib.h>

int soma(int n); 

void main (void){
	int x=5;
	int r= soma(x);
	printf("%d", r);
}

int soma(int n){
	if(n<=1) 
		return 1;
	else
		return n + soma(n-1); 
}