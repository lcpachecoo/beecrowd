#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n, l , d;
    float qtd;
    cin>>n>>l>>d;
    qtd= n*d;
    qtd= qtd/1000;
    qtd= ceil(qtd/l)*l;
    cout<<qtd<<endl;
    
    
    return 0;
}