#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y;
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>y;
        if(y<=8000){
            cout<<"Inseto!"<<endl;
        }else{
            cout<<"Mais de 8000!"<<endl;
        }
    }
    return 0;
}