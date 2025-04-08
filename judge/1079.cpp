#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a,b,c;
    int x ;
    float media=0;
    cin>>x ;
    for(int i=0;i<x;i++){
        cin>>a>>b>>c;
        media=((a*2)+(b*3)+(c*5))/10;
        cout << fixed << setprecision(1);
        cout<<media<<endl;
    }
    

    return 0;
}