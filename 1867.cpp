#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{_
    int  x=0,contx=0,y=0,conty=0,flag=0;
    char cx[101], cy[101],e;
    while(flag!=1){
        scanf("%s", cx);
        scanf("%c", &e);
        scanf("%s", cy);
        
        for(int i =0; i<strlen(cx); i++){
            x+= cx[i]-48;
        }
        for(int i =0; i<strlen(cy); i++){
            y+= cy[i]-48;
        }
        //cout<<x<<" "<<y<<endl;
        if(x==0 && y==0){
            flag=1;
        }
        while(x>0){
            contx+=x%10;
            x=x/10;
            if(x<1 && contx>9){
                x=contx;
                contx=0;
            }
        }
        while(y>0){
            conty+=y%10;
            y=y/10;
            if(y<1 && conty>9){
                y=conty;
                conty=0;
            }
        }
        if(conty==contx && flag!=1){
            cout<<"0\n";
        }else{
            if(conty>contx&& flag!=1){
                cout<<"2"<<endl;
            }else{
                if(contx>conty&& flag!=1)
                    cout<<"1\n";
            }
        }
        contx=0;
        conty=0;
        
    }

    return 0;
}