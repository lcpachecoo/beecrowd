#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double A,B,C, pi=3.14159, area;
	cin>>A>>B>>C;
	area = (A*C)/2;
	cout<<fixed<<setprecision(3);
	cout<<"TRIANGULO: "<<area<<endl; 
	area= pi*(C*C);
	cout<<"CIRCULO: "<<area<<endl; 
	area= (A+B)*C/2;
	cout<<"TRAPEZIO: "<<area<<endl; 
	area= B*B;
	cout<<"QUADRADO: "<<area<<endl; 
	area= A*B;
	cout<<"RETANGULO: "<<area<<endl; 
	
}