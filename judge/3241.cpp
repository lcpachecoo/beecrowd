#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x ;
    int n; 
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>x;
        if(x=="P=NP" ){
            cout<<"skipped"<<endl;
        }else{
        
            int j=0;
            while(x[j]!='+')
                j++;
                
            int a = stoi(x.substr(0, j));
            int b = stoi(x.substr(j + 1));
            cout<<a+b<<endl;
        }
    }
      
    return 0;
}