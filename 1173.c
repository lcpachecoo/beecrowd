#include <stdio.h>
#include <stdlib.h>  

int main() {
	
	int  Num;
	scanf("%d", &Num); 
	 
	for(int i=0; i<10;i++){
		printf("N[%d] = %d\n",i,Num);
		Num= Num*2;
		 
	}
	 
	
	

    return 0;
}
