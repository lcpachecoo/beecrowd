#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n, x,d,joao=0,maria=0;
    cin>>n;
    while(n--){
        for(int i=0;i<3; i++){
            cin>>x>>d;
            joao+= x*d;   
        }
        for(int i=0;i<3; i++){
            cin>>x>>d;
            maria+= x*d;  
        }
        if(joao>maria){
            cout<<"JOAO\n";
        }else{
            cout<<"MARIA\n";
        }
        joao=0;
        maria=0;
        
    }    
    return 0;
}