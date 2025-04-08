#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,x,y;
    int soma=0;
    cin>>x>>y;
    while(x!=y){
        //cin>>x>>y;
        if(x>y){
            cout<<"Decrescente"<<endl;
        }else{
            if(y>x)
               cout<<"Crescente"<<endl;
        }
        cin>>x>>y;
    }
    

    return 0;
}