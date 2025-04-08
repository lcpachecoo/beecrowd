#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,x,y;
    int soma=0;
    cin>>x>>y;
    while(x!=0||y!=0){
        //cin>>x>>y;
        if(x>0 && y>0){
            cout<<"primeiro"<<endl;
        }else{
            if(x>0 && y<0){
               cout<<"quarto"<<endl;
            }else{
                if(x<0 && y>0){
                    cout<<"segundo"<<endl;
                }else{
                    if(x<0 && y<0){
                        cout<<"terceiro"<<endl;
                    }
                }
            }
        }
        cin>>x>>y;
    }
    

    return 0;
}