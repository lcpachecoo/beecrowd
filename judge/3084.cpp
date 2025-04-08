#include <iostream>

using namespace std;

int main()
{
    int h,m,hora,min;
    while(cin>>h){
        cin>>m;
        //hora================================= 
        
        hora=h/30;
        
        
        
        
        //min==================================
        min=m/6;
        if(m%6!=0){
            if(m%6>=3){
                min++;
            }
        }
        
        
        
        if(hora<10){
            cout<<"0";
        }
        cout<<hora<<":";
        if(min<10){
            cout<<"0";
        }
        cout<<min<<endl;
    }

    return 0;
}