#include <stdio.h>

int main() {
	char vet[11][50] = {"PROXYCITY","P.Y.N.G.", "DNSUEY!","SERVERS", "HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?", "WIFI ANTENNAS"};
	int x,y,z;
	scanf("%d", &x);
	for(int i =0; i<x; i++){
		scanf("%d" "%d", &z, &y);
		printf("%s\n",vet[z+y]);
	}
	
    return 0;
}
