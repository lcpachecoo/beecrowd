/*
**Se a temperatura subiu do 1º para o 2º dia, mas desceu ou permaneceu constante do 2º para o 3º, as pessoas ficam tristes (segunda figura).
**Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º menos do que subira do 1º para o 2º, as pessoas ficam tristes (terceira figura).
**Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º, as pessoas ficam tristes (sexta figura).
**Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam felizes se subiu do 2º para o 3º dia ou tristes caso contrário (respectivamente, sétima e oitava figuras).*/
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);cin.tie(0);


using namespace std;

int main()
{_ 
    int a, b,c;
    bool flag=true;
    cin>>a>>b>>c;
    //  if(b>a && b>c || b>a && b==c) flag=false;
    if(b>a && c>a){
        if((c-b)<(b-a)) flag=false;
    }
    if(a>b && b>c){
        if((a-b)<=(b-c)) flag=false;
    }
    if(a==b && c<b) flag=false;
    if(a==b && b==c) flag = false;
    
    if(flag) cout<<":)"<<endl;
    else cout<<":("<<endl;
    return 0;
}