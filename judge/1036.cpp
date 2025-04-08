#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	  
	double  a,b,c,delta,R1,R2; 
	cin>>a>>b>>c;
    delta=(b*b)+(-4*a*c);
    if(delta<0 || a==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        R1=((b*-1)+sqrt(delta))/(2*a);
        R2=((b*-1)-sqrt(delta))/(2*a);
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<R1<<endl<<"R2 = "<<R2<<endl;

    }
	return 0;
	
}