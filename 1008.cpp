#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int num, horas;
   float pgporhora, calc;
   
   cin>>num>>horas>>pgporhora;
   calc= horas*pgporhora;
   cout<<fixed<<setprecision(2);
   cout<<"NUMBER = "<<num<<endl;
   cout<<"SALARY = U$ "<<calc<<endl;

}


