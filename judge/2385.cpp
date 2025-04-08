#include <iostream>

using namespace std;

int main()
{
    int n,i,j,p,q,r,s,x,y;
    unsigned long long soma=0;
    cin>>n;
    int mat[n][n];
    cin>>p>>q>>r>>s>>x>>y;
    cin>>i>>j;
    for(int v=1;v<=n;v++){
        soma+=((p*i+q*v)%x)*((r*v+s*j)%y);
    }
    cout<<soma<<endl;
    return 0;
}