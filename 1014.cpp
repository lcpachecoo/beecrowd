#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int kmtotal;
	float litrosusados,x;
	
	cin>>kmtotal>> litrosusados;
	x=kmtotal/ litrosusados;
	cout<<fixed<<setprecision(3);
	cout<<x<<" km/l"<<endl;
	
}