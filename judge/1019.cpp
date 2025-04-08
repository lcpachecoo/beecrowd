#include <iostream>
using namespace std;

int main()
{
	int segundos,inteiro ,resto;
	cin>>segundos;
	inteiro = segundos/3600;
	resto= segundos%3600;
	cout<<inteiro<<":";
	inteiro = resto/60;
	resto = resto%60;
	cout<<inteiro<<":";
	inteiro = resto;
	cout<<inteiro<<endl;

}

