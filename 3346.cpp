#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double resultado,num1,num2,valor2;
    cin>>num1>>num2;
    
    resultado=num1/100;
    resultado=resultado*100;
    resultado=100+resultado;
    valor2=num2/100;
    valor2=resultado*valor2;
    resultado= resultado+valor2;
    resultado=resultado-100;
    cout<<fixed<<setprecision(6);
    cout<<resultado<<endl;

    return 0;
}