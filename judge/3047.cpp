#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    int x,y,z,v;
    cin>>x>>y>>z;
    v=y+z;
    v=x-v;
    if(y>z &&y>v){
        cout<<y<<endl;
    }else{
        if(z>y && z>v){
            cout<<z<<endl;
        }else{
            cout<<v<<endl;
        }
    }
    
    return 0;
}