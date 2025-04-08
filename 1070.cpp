#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int soma=0;
    cin>>x ;
    for(int i=x;soma<6;i++){
        if(i%2!=0){
            cout<<i<<endl;
            soma++;
        }
    }
    

    return 0;
}