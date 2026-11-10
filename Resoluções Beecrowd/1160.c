/*#include <stdio.h>
#include<math.h>
 
int main() {
    int t;
    scanf("%d", &t);
    int n =0;
    float pa, pb, g1, g2;
    
    for(int i=0; i<t; i++){
        scanf("%f %f %f %f", &pa , &pb , &g1 , &g2);
            //printf("%.0f %.0f %.1f %.1lf \n", pa, pb, g1, g2);
        while(pa<pb){
            float a = (g1/100);
            a++;
            float b = (g2/100);
            b++;
            //printf("%lf %lf\n", a, b);
            pa*=(pow (a,n));
            pb*=(pow(b,n));
            n++;
            printf("%.0f %.0f %f %f %d\n", pa, pb, a, b, n);
        }
        if(n>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", n);
        }
        
    }
    return 0;
}*/
/*#include <stdio.h>
#include<math.h>
 
int main() {
    int t;
    scanf("%d", &t);
    int n =0;
    float  g1, g2;
    int pa, pb, x, y;
    
    for(int i=0; i<t; i++){
        scanf("%d %d %f %f", &pa , &pb , &g1 , &g2);
            //printf("%.0f %.0f %.1f %.1lf \n", pa, pb, g1, g2);
        
            float a = (g1/100);
            a++;
            float b = (g2/100);
            b++;
            x= pa *a;
            y= pb*b;
            a=x - pa;
            b=y - pb;
        //while(pa<pb){
            printf("a%.2f b%.2f\n", x, y);
            pa = pa +(int)a;
            pb = pb +(int)b;
            n++;
            printf("a%.2f b%.2f pa%d pb%d n%d\n", a, b,pa, pb, n);
            pa = pa +(int)a;
            pb = pb +(int)b;
            n++;
            printf("a%.2f b%.2f pa%d pb%d n%d\n", a, b,pa, pb, n);
        //}
        /*if(n>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", n);
        }*/
      /*  
    }
    return 0;
}
*/
#include <stdio.h>
#include<math.h>
 
int main() {
    int t;
    scanf("%d", &t);
    int n =1;
    float  g1, g2;
    int pa, pb, x, y;
    
    for(int i=0; i<t; i++){
        scanf("%d %d %f %f", &pa , &pb , &g1 , &g2);
        if((int)g1< g1){
            (int)g1++;
        }
        if((int)g2< g2){
            (int)g2++;
        }
        while(pa<pb){
            pa= pa + (int)g1;
            pb = pb + (int)g2;
            printf("%d %d\n", pa, pb);
            n++;
        }
        if(n>=100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", n);
        }
        
    }
    
    return 0;
}