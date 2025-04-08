#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_ 
    signed short int a, b,r,q;
    int flag =0;
    cin>>a>>b;
    if (a >= 0) {
        q = a / b;
        r = a % b;	
    } else {
        int x = 0, y = 0;
        
        if (b < 0) x = b * -1;
        else x = b;
        
        for (r = 0; r < x; r++) {
            y = a - r;
            if (y % b == 0) break;
        }
        q = y / b;
    }
    cout<<q<<" " << r<<endl; 
    
    
    return 0;
}