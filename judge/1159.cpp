#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int x,y=5,soma=0;
    cin>>x;
    while(x!=0){
        for(int i=0; i<y; x++){
            if(x%2==0){
                soma+=x;
                i++;
            }
        }
        cout<<soma<<endl;
        soma=0;
        cin>>x;
    }
    return 0;
}