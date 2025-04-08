#include <iostream>
 
using namespace std;
 
int main() {
 
    int t, cont = 0,d;
    scanf("%d", &t);
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &d);
        if(t == d)
        {
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}