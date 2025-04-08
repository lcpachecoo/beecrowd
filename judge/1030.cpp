#include <iostream>

using namespace std;

int main()
{ 
    int n,x,y,resposta=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        for(int j=1; j<=x;j++){
            resposta=(resposta+y)%j; 
            
            
        }
        
        
        
        cout<<"Case "<<i+1<<": "<<resposta+1<<endl;
    }
    return 0;
}
