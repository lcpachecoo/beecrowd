#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,x,y;
    int soma=0;
    cin>>x;
    
    for(int i=1;i<=x;i++){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
    }

    return 0;
}