#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,mes,dia,cont=0,i=0; 
    
    while(scanf("%d", &mes)!=EOF){
        //scanf("%d", &mes);
        scanf("%d", &dia);
        cont=0;
        i=1;
        while(i==1){
            if(mes==4||mes==6||mes==9||mes==11){
                if(dia==30){
                    
                    dia=0;
                    mes++;
                }
                dia++;
                cont++;
            }else{
                if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10){
                    if(dia==31){
                        
                        dia=0;
                        mes++;
                    }
                    dia++;
                    cont++;
                }else{
                    if(mes==2){
                        if(dia==29){
                            dia=0;
                            mes++;
                        }
                        dia++;
                        cont++;
                    }else{
                        if(mes==12){
                            if(dia<25){
                                cont++;
                                dia++;
                            }else{
                                if(dia==25){
                                    i=0;
                                }else{
                                    if(dia>25){
                                        cont=-1;
                                        i=0;
                                    }
                                }
                                
                            }
                        }
                    }
                }
            }
            
        }
        if(cont==-1){
           printf("Ja passou!\n");
        }else{
            if(cont==0){
                printf("E natal!\n");
            }else{
                if(cont==1){
                    printf("E vespera de natal!\n");
                }else{
                    printf("Faltam %d dias para o natal!\n",cont);
                }
            }
        }
    }

    return 0;
}
