#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int cod1, cod2, unidadespc1, unidadespc2;
	float valor1, valor2, x;
	
	cin>>cod1>>unidadespc1>>valor1;
	cin>>cod2>>unidadespc2>>valor2;
	x= (unidadespc1 * valor1) + (unidadespc2 * valor2);
	cout<<fixed<<setprecision(2);
	cout<<"VALOR A PAGAR: R$ "<<x<<endl;
	

}