#include <stdio.h>

int main()
{
    int andar, start, goal, up, down;
    scanf("%d %d %d %d %d", &andar, &start, &goal, &up, &down);
    int cont = 0;
    if(start%2==0 && goal%2!=0 && up%2==0 && down%2==0 || start%2!=0 && goal%2==0 && up%2==0 && down%2==0 || start > goal && down == 0 || up == 0 && start < goal){
        printf("use the stairs\n");
    }
    else{
        while(start != goal){
            if(start > goal){
                if((start + up) <= andar){
                    start = start - down;
                    cont++;
                }
                else if((start - down) > 0){
                    start = start + up;
                    cont++;
                }
            }
            if(start < goal){
                if((start + up) <= andar){
                    start = start + up;
                    cont++;
                }
                else if((start + up) >= andar){
                    start = start - down;
                    cont++;
                }
            }
        }
        printf("%d\n", cont);
    }
}