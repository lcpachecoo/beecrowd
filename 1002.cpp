#include <iostream> 
#include <iomanip> 
using namespace std;

int main(){
	double  raio , area ,n= 3.14159;
	 
	
	cin>>raio;
	raio= raio * raio ;
	area= n * raio;
	cout<<fixed<<setprecision(4);
	cout<<"A="<<area<<endl;
}
