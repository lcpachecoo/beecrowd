#include <stdio.h>
#include <stdlib.h> 
double xama(double x,int cont){
    for(int i=0; i<cont; i++){
        x+=6.0;
        x= 1.0/x;
    }
     x+=3.0;
     return x;
}
int main(){
    int cont;
    double n=3,j;
    double x=0,y=6;
    scanf("%d", &cont);
    
    x=xama(x,cont);
     printf("%.10lf\n", x   );
    return 0;
}
