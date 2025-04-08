#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,contb=0,contp=0;
    cin>>x;
    x=x*x;
    int vet[x];
    for(int i=0; i<x;i+=2){
        contb++;
    }
    cout<<contb<<" casas brancas e "<<x-contb<<" casas pretas"<<endl;
    return 0;
}