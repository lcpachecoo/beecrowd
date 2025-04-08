#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y;
    string nome;
    cin>>x;
    for(int i=0; i<x;i++){
        cin>>nome>>y;
        if(nome=="Thor"){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}