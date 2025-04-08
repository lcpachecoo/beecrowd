#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int resultado,aux,num1,num2,num3,maior,menor,meio;
    cin>>num1;
    maior=num1;
    cin>>num2;
    if(maior<num2){
        aux=maior;
        maior=num2;
        meio=num1;
    }else{
        meio=num2;
    }
    cin>>num3;
    if(maior<num3){
        aux=maior;
        maior=num3;
        menor=meio;
        meio=aux;
    }else{
        if(num3<meio){
            menor=num3;
        }else{
            aux=meio;
            meio=num3;
            menor=aux;
        }
    }
    if(meio==num1){
        cout<<"huguinho"<<endl;
    }else{
        if(meio==num2){
            cout<<"zezinho"<<endl;
        }else{
            cout<<"luisinho"<<endl;
        }
    }

    return 0;
}