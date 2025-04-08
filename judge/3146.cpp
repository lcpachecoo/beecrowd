#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{ 
    double r,area;
    cin>>r;
    area=r;
    area=area*2;
    area=area*3.14;
    cout<<fixed<<setprecision(2);
    cout<<area<<endl;
    return 0;
}