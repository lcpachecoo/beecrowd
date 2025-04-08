#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n,x,y=5,soma=0;
    cin>>n;
    while(n--){
        cin>>x;
        for(int i=1;i<x;i++){
            if(x%i==0){
                soma+=i;
            }
        }
        cout<<x;
        if(soma==x){
            cout<<" eh perfeito\n";
        }else{
            cout<<" nao eh perfeito\n";
        }
        soma=0;
    }
    return 0;
}