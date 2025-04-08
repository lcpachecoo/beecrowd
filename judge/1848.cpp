#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    string word;
    int soma=0,exp=0;
    stack<int> p;
    while(getline(cin, word)){
        if(word[0]!='c'){
            for(int i=0;i<3;i++){
                if(word[i]=='-'){
                    p.push(0);
                }else{
                    p.push(1);
                }
            }
        }else{
            
            while(!p.empty()){
                if(p.top()==1) soma+= pow(2,exp);
                exp++;
                p.pop();
                if(exp%3==0) exp=0;
            }
            cout<<soma<<endl;
            soma=0;
            exp=0;
        }
    }
    
    return 0;
}