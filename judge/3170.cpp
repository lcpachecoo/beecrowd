#include <iostream>

using namespace std;

int main()
{
    int b,g,soma;
    cin>>b>>g;
    soma=g/2;
    soma=soma-b;
    if(soma<=0){
        cout<<"Amelia tem todas bolinhas!"<<endl;
    }else{
        cout<<"Faltam "<<soma<<" bolinha(s)"<<endl;
    }

    return 0;
}