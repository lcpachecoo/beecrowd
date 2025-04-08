#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a;
    for(int i=0 ; i<a;i++){
        cin>>b>>c>>d;
        if(b>=200 && b<=300 && c>=50 &&d>=150){
            cout<<"Sim"<<endl;
        }else{
            cout<<"Nao"<<endl;
        }
        
    }
    return 0;
}