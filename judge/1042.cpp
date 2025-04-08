#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int vet[3],vetord[3];
    int aux;
    for(int i=0;i<3;i++){
        cin>>vet[i] ;
        vetord[i]=vet[i];
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(vetord[i]>vetord[j]){
                aux=vetord[i];
                vetord[i]=vetord[j];
                vetord[j]=aux;
            }
        }
    }
    cout<<vetord[2]<<endl<<vetord[1]<<endl<<vetord[0]<<endl<<endl;
    cout<<vet[0]<<endl<<vet[1]<<endl<<vet[2]<<endl;
    return 0;
}