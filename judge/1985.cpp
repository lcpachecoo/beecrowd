#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y,m;
    double s=0 ;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>y>>m;
        if(y==1001){
            s+=m*1.5;
        }else{
            if(y==1002){
                s+=m*2.5;
            }else{
                if(y==1003){
                    s+=m*3.5;
                }else{
                    if(y==1004){
                        s+=m*4.5;
                    }else{
                        s+=m*5.5;
                    }
                }
            }
        }
    }
    cout<<fixed<<setprecision(2);
    cout<<s<<endl;
     
    return 0;
}