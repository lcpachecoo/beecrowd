#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    char n, vet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
    cin>>n;
    for(int i=0;i<26;i++){
        if(n==vet[i]){
            cout<<i+1;
        }
    }
    cout<<endl;
    return 0;
}