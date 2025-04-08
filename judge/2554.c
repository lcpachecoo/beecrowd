#include <stdio.h>
#include <stdlib.h>

int main(){
	int dia, mes, ano,d,a,m;
	int N,datas, cont=0,contx=0;
	int x;
	
	
	while(scanf("%d", &N)!=EOF){
		scanf("%d", &datas);
		for(int j=0;j<datas;j++){
			scanf("%d/%d/%d", &dia ,&mes,&ano);
			for(int i=0; i<N;i++){
				scanf("%d", &x);
				if(x==1){
					cont++;
					
				}
			}
			d= dia;
			m= mes;
			a= ano;
			if(cont==N){
				contx++;
				if(contx==1)
				printf("%d/%d/%d\n",d ,m ,a );
				
			}
			cont=0;
		}
		if(contx<1){
			printf("Pizza antes de FdI\n");
		}
		contx=0;
	}
	return 0;
}
