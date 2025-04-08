#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a=1,b,c;
	int x;
	while(a!=0){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0){
		    break;
		}
		x=sqrt(a*b*(100.0/c));
		printf("%d\n",x );
	}
	return 0;
}
