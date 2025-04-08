#include <iostream>
using namespace std;

int main()
{
	int dias,inteiro ,resto;
	cin>>dias;
	inteiro = dias/365;
	resto= dias%365;
	cout<<inteiro<<" ano(s)"<<endl;
	inteiro = resto/30;
	resto = resto%30;
	cout<<inteiro<<" mes(es)"<<endl;
	inteiro = resto;
	cout<<inteiro<<" dia(s)"<<endl;

}

