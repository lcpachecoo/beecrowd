#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char x[1000];
    int n,y; 
    fgets(x,1000,stdin);
    n=strlen(x);
    fgets(x,1000,stdin);
    y=strlen(x);
    if(y<=n){
        cout<<"go"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}