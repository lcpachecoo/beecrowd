#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y,resto, soma;
    cin>>x>>y;
    if(x>=y){
        resto= x - 24;
        soma = abs(resto) + y;
        cout<<"O JOGO DUROU "<<soma<<" HORA(S)"<<endl;
    }else{
        soma= y -x;
        cout<<"O JOGO DUROU "<<soma<<" HORA(S)"<<endl;
    }
    
    return 0;
}
