#include <stdio.h>
#include <stdlib.h> 
void calculo(float *vg1,float *vg2, int AD,int DD,int  AG,int  DG,int bonus, int LD, int LG){
    *vg1= ((AD+DD)/2) ;
	*vg2= ((AG+DG)/2) ;
	if((LD%2)==0){
		*vg1= *vg1+bonus;
	}
	if((LG%2)==0){
		*vg2= *vg2+bonus;
	}
}
int main(){
	int x ;
	int bonus , AD,DD,LD,AG,DG,LG;
	float vg1,vg2;
	scanf("%d", &x );
	for(int i=0; i<x; i++){
		scanf("%d", &bonus );
		scanf("%d", &AD );
		scanf("%d", &DD );
		scanf("%d", &LD );
		scanf("%d", &AG );
		scanf("%d", &DG );
		scanf("%d", &LG );
		
		calculo(&vg1,&vg2,AD,DD,AG,DG,bonus,LD,LG);
		if(vg1>vg2){
			printf("Dabriel\n");
		}else{
			if(vg1<vg2){
				printf("Guarte\n");
			}else{
				printf("Empate\n");
			}
		}
	}
	
	return 0;
}
