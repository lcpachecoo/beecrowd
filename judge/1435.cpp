#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n,x,element, endMat, beginMat;
    cin>>x;
    while(x!=0){
        int mat[x][x];
        element=1;
        endMat=x;
        beginMat=0;
        while(endMat!=0){
            for(int i=beginMat;i<endMat;i++){
                for(int j=beginMat;j<endMat;j++){
                    mat[i][j]=element;
                }
            }
            element++;
            beginMat++;
            endMat--;

        }
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(j!=0){
                    cout<<setw(4)<<mat[i][j];
                }else{
                    cout<<setw(3)<<mat[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;

        
        cin>>x;
    }
    return 0;
}