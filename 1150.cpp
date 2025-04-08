#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int x,z, soma=0,cont=1;
    cin>>x;
    cin>>z;
    while(z<=x) cin>>z;
    soma=x;
    while(soma<z){
        x++;
        soma+=x;
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}