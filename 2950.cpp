#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a,b,c,d,e,f;
    cin>>a>>b>>c;
    
    d=a/(c+b);
    cout<<fixed<<setprecision(2);
    cout<<d<<endl;
    return 0;
}