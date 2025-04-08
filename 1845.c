#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t;
    int cont=0;  
    
    while(scanf("%c", &t)!=EOF){
        if(t==102||t==115||t==106||t==98||t==122||t==120||t==118||t==112){
            t=102;
            cont++;
        }else{
            if(t==70||t==74||t==66||t==90||t==88||t==86||t==80||t==83){
                t=70;
                cont++;
            }else{
                cont=0;
            }
            
        }
        
        if(cont<2){
            printf("%c",t);
        } 
    }
    
    
    
    
    return 0;
}

