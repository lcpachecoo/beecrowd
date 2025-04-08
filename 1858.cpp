#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_ 
    int x,y=30,n,z;
    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>x;
        if(x<y){
            z=i;
            y=x;
        }
    }
    cout<<z<<endl;
    return 0;
}