#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int n,x,y,soma=0;
    cin>>n;
    while(n--){
        cin>>x>>y;
        for(int i=0; i<y; x++){
            if(x%2!=0){
                soma+=x;
                i++;
            }
        }
        cout<<soma<<endl;
        soma=0;
    }
    return 0;
}