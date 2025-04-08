#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
 
    int x,y,cont=0,p=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        cin>>y;
        for(int i=2;i<=sqrt(y);i++){
            if(y%i==0){
                p=1;
            }
        }
        if(p==0 && y!=1){
            cout<<y<<" eh primo"<<endl;
        }else{
            cout<<y<<" nao eh primo"<<endl;
        }
        p=0;
    }
    
    return 0;
}