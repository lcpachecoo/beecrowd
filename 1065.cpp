#include <iostream>
 
using namespace std;
 
int main() {
    int x,cont;
    for(int i=0; i<5;i++){
        cin>>x;
        if(x%2==0)
            cont++;
            
        
    }
    cout<<cont<<" valores pares"<<endl;
 
    return 0;
}