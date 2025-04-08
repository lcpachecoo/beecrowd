#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	  
    int cod, qtd;
    float x;
    cin>>cod>>qtd;
    if(cod==1){
        x= 4*qtd;
        cout<<fixed<<setprecision(2);
    }
    if(cod==2){
        x= 4.5*qtd;
        cout<<fixed<<setprecision(2);
    }
    if(cod==3){
        x= 5*qtd;
        cout<<fixed<<setprecision(2);
    }
    if(cod==4){
        x= 2*qtd;
        cout<<fixed<<setprecision(2);
    }
    if(cod==5){
        x= 1.5*qtd;
        cout<<fixed<<setprecision(2);
    }
    cout<<"Total: R$ "<<x<<endl;
	return 0;
	
}
