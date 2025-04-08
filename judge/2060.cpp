#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y,m2=0,m3=0,m4=0,m5=0;
    cin>>x;
    for(int i=0; i<x;i++){
        cin>>y;
        if(y%2==0){
            m2++;
        }    
        if(y%3==0){
            m3++;
        }    
        if(y%4==0){
            m4++;
        }    
        if(y%5==0){
            m5++;
        }    
    }
    cout<<m2<<" Multiplo(s) de 2"<<endl;
    cout<<m3<<" Multiplo(s) de 3"<<endl;
    cout<<m4<<" Multiplo(s) de 4"<<endl;
    cout<<m5<<" Multiplo(s) de 5"<<endl;
    return 0;
}