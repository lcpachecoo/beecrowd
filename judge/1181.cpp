#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int L;
    char SouM;
    float resultado=0,mat[12][12];
    cin>>L;
    cin>>SouM;
    
    for(int i=0; i<12;i++){
        for(int j=0;j<12;j++){
            cin>>mat[i][j];
            if(i==L){
                resultado+=mat[i][j];
            }
        }
    }
    cout << fixed << setprecision(1);
    if(SouM=='M'){
        cout<<resultado/12<<endl;
    }else{
        cout<<resultado;
    }
    return 0;
}