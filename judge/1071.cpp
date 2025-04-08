#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int soma=0;
    cin>>x>>y;
    for(int i=y+1;i<x;i++){
        if(i%2!=0){
            soma+=i;
        }
    }
    cout<<soma<<endl;

    return 0;
}