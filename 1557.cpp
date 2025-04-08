#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n,x,element, endMat, beginMat,aux,cont=1,max;
    bool flag=false;
    cin>>x;

    while(x!=0){
        int mat[x][x];
        endMat=x;
        beginMat=0;
        aux=1;
            for(int i=beginMat;i<endMat;i++){
                element=aux;
                for(int j=beginMat;j<endMat;j++){
                    mat[i][j]=element;
                    element*=2;
                }
                
                aux*=2;
            }

        max=mat[x-1][x-1];
        //cout<<"dasdad";
        n=0;
        while(max>0){
			max = max/10;
			n++;
        }

        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(j!=0){
                    cout<<setw(n+1)<<mat[i][j];
                }else{
                    cout<<setw(n)<<mat[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;

        
        cin>>x;
        cont++;
    }
    return 0;
}