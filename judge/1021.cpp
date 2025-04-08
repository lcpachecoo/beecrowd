#include <iostream>
using namespace std;

int main()
{
	int inteiro, money ,resto;
	double  mon;  
  
	cin>>mon;
	cout<<"NOTAS:"<< endl;
	money=mon*100;
	inteiro= money/10000;
	resto = money % 10000 ;
	cout<<inteiro<<" nota(s) de R$ 100.00"<<endl;
	
	inteiro= resto/5000;
	resto= resto % 5000;
	cout<<inteiro<<" nota(s) de R$ 50.00"<<endl;
	
	inteiro= resto/2000;
	resto= resto % 2000;
	cout<<inteiro<<" nota(s) de R$ 20.00"<<endl;
	
	inteiro= resto/1000;
	resto= resto % 1000;
	cout<<inteiro<<" nota(s) de R$ 10.00"<<endl;
	
	inteiro= resto/500;
	resto= resto % 500;
	cout<<inteiro<<" nota(s) de R$ 5.00"<<endl;
	
	inteiro= resto/200;
	resto= resto % 200;
	cout<<inteiro<<" nota(s) de R$ 2.00"<<endl;
	cout<<"MOEDAS:"<< endl;
	
	inteiro= resto/100;
	resto= resto % 100;
	cout<<inteiro<<" moeda(s) de R$ 1.00"<<endl;
	
	inteiro= resto/50;
	resto= resto % 50;
	cout<<inteiro<<" moeda(s) de R$ 0.50"<<endl;
	
	inteiro= resto/25;
	resto= resto % 25;
	cout<<inteiro<<" moeda(s) de R$ 0.25"<<endl;
	
	inteiro= resto/10;
	resto= resto % 10;
	cout<<inteiro<<" moeda(s) de R$ 0.10"<<endl;
	
	inteiro= resto/5;
	resto= resto % 5;
	cout<<inteiro<<" moeda(s) de R$ 0.05"<<endl;
	
	inteiro= resto/1;
	resto= resto % 1;
	cout<<inteiro<<" moeda(s) de R$ 0.01"<<endl;
	
	
}
