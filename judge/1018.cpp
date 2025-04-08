#include <iostream>
using namespace std;

int main()
{
	int inteiro, money ,resto;
	 
  
	cin>>money;
	cout<<money<<endl;
	inteiro= money/100;
	resto = money % 100 ;
	cout<<inteiro<<" nota(s) de R$ 100,00"<<endl;
	
	inteiro= resto/50;
	resto= resto % 50;
	cout<<inteiro<<" nota(s) de R$ 50,00"<<endl;
	
	inteiro= resto/20;
	resto= resto % 20;
	cout<<inteiro<<" nota(s) de R$ 20,00"<<endl;
	
	inteiro= resto/10;
	resto= resto % 10;
	cout<<inteiro<<" nota(s) de R$ 10,00"<<endl;
	
	inteiro= resto/5;
	resto= resto % 5;
	cout<<inteiro<<" nota(s) de R$ 5,00"<<endl;
	
	inteiro= resto/2;
	resto= resto % 2;
	cout<<inteiro<<" nota(s) de R$ 2,00"<<endl;
	inteiro = resto/1;
	cout<<inteiro<<" nota(s) de R$ 1,00"<<endl;

	
	
	
}


