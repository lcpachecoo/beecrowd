#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=0,g=0,d=0;
    int n,x,y;
    int soma=0;
    cin>>x;
    
    while(x!=4){
        if(x==1){
            a++;
        }else{
            if(x==2){
                g++;
            }else{
                if(x==3){
                    d++;
                }
            }
        }
        cin>>x;
    }
    cout<<"MUITO OBRIGADO\nAlcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<"\nDiesel: "<<d<<endl;
    return 0;
}