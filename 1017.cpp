#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	int horas, velmed;
	float litros;
	
	cin>>horas>>velmed;
	litros=(horas*(float)velmed)/12;
	cout<<fixed<<setprecision(3);
	cout<<litros<<endl;
	
	
}


