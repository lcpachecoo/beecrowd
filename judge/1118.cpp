#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n,media=0;
    int x=1,cont=0,flag=2;
    
    while(flag!=3){
        cin>>n;
        if(n<0 || n>10){
            cout<<"nota invalida\n";
        }else{
            media+=n;
            cont++;
            if(cont==2){
                cont=0;
                cout<<fixed<<setprecision(2);
                cout<<"media = "<<media/2<<endl;
                media=0;
                x=0;
                while(flag!=0){
                    cout<<"novo calculo (1-sim 2-nao)\n";
                    cin>>x;
                    if(x==2 || x==1){
                        flag=0;
                    }
                }
                if(x==2){
                    flag=3;
                }else{
                    flag=1;
                }
            }
        }
        
        
    }

    return 0;
}