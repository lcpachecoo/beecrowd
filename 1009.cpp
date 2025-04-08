#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char nome[55]; 
	double sf, vendas,x;
	cin>>nome;
	cin>>sf>>vendas;
	x= sf + (vendas*0.15);
	cout<<fixed<<setprecision(2);
	
	cout<<"TOTAL = R$ "<<x<<endl;
	
}
