#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int C=11;
    char SouM;
    double resultado=0,mat[12][12];
    //cin>>C;
    cin>>SouM;
    
    for(int i=0; i<12;i++){
        for(int j=0;j<12;j++){
            cin>>mat[i][j];
            if(j>i && j>C){
                resultado+=mat[i][j];
            }
        }
        C--;
    }
    cout << fixed << setprecision(1);
    if(SouM=='M'){
        cout<<resultado/30<<endl;
    }else{
        cout<<resultado<<endl;
    }
    return 0;
}