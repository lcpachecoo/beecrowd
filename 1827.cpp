#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n,x,element, endMat, beginMat,aux,cont=1,max,meio;
    bool flag=false;
    

    int mat[102][102]={0};
    while(cin>>x){
        
        endMat=x;
        beginMat=0;
        aux=x/3;
        for(int i=beginMat;i<endMat;i++){
            for(int j=beginMat; j<endMat; j++){
                mat[i][j]=0;
            }
        }
        
        //diagonal principal, secundaria e o meio
            for(int i=beginMat,  j= endMat-1;i<endMat;i++,j--){
                mat[i][i]=2;
                mat[i][j]=3;
                if(i==j) meio=i;
            }
            for(int i=aux;i<endMat-aux;i++){
                for(int j=aux; j<endMat-aux; j++){
                    mat[i][j]=1;
                }
            }
            mat[meio][meio]=4;

        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }
        cout<<endl;

        
    }
    return 0;
}