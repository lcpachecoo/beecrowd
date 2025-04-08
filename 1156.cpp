#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s=1,x=2;
    for(float i=3; i<=39;i+=2){
        s+=i/x;
        x=x*2;
    }
    printf("%.2lf\n",s);
    return 0;
}