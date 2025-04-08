#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int QT;
	int x,y;
	char nome1[30], nome2[30];
	char jog1[30], jog2[10];
	scanf("%d", &QT);
	for(int i=0;i<QT; i++){
		scanf("%s", nome1);
		scanf("%s", jog1 );
		scanf("%s", nome2);
		scanf("%s", jog2);
		scanf("%d", &x);
		scanf("%d", &y);
		if(x>y){
			if(((x-y)%2)==0){
				if(strcmp(jog1,"PAR")==0){
					printf("%s\n", nome1);
				}
				if(strcmp(jog2,"PAR")==0){
					printf("%s\n", nome2);
				}
			}else{
				if(strcmp(jog1,"IMPAR")==0){
					printf("%s\n", nome1);
				}
				if(strcmp(jog2,"IMPAR")==0){
					printf("%s\n", nome2);
				}
			}
			
		}else{
			if(((y-x)%2)==0){
				if(strcmp(jog1,"PAR")==0){
					printf("%s\n", nome1);
				}
				if(strcmp(jog2,"PAR")==0){
					printf("%s\n", nome2);
				}
			}else{
				if(strcmp(jog1,"IMPAR")==0){
					printf("%s\n", nome1);
				}
				if(strcmp(jog2,"IMPAR")==0){
					printf("%s\n", nome2);
				}
			}
			
		}

	}
	return 0;
}
