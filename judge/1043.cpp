#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float A,B,C;
    float soma=0.0, areaT=0.0;
    cin>>A>>B>>C;
    if((A+B)>C &&  (A+C)>B &&(B+C)>A){
        soma= A+B+C;
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<soma<<endl;
    }else{
        areaT= ((A+B)*C)/2;
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<areaT<<endl;
    }
    return 0;
}