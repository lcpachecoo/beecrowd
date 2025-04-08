#include <iostream>
 
using namespace std;
 
int main() {
 
    char frase[1000] = {0};
    int i;
    scanf("%[^\n]", &frase);
    for(i = 0;i < 1000 && frase[i] != 0; i++)
    { 
        if(frase[i] != 'p')
        {
            printf("%c", frase[i]);
        }
        if(frase[i - 1] == 'p' && frase[i] == 'p')
        {
            printf("%c", frase[i]);
            frase[i] = 0;
        }
    }
    printf("\n");
    return 0;
}