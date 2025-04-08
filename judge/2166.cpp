#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x,y=1,m=0,j=2,f=0.5;
    double s=0 ;
    cin>>x;
    for(float i=0;i<x ;i++){
        m+=2.0;
        m=1.0/m;
    }
    m+=1;
    cout<<fixed<<setprecision(10);
    if(x==0){
        cout<<y<<endl;
    }else{
        cout<<m<<endl;
    }
     
     
    return 0;
}