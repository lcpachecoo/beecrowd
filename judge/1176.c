#include <stdio.h>

int main() {
    long long int fibonacci[60];  
	int leitura, num;
    fibonacci[0] = 0; 
    fibonacci[1] = 1;  
 
    for (int i = 2; i <= 60; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

     scanf("%d", &leitura);
    for (int i = 0; i < leitura; i++) {
		scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, fibonacci[num]);
    }

    return 0;
}
