#include <iostream>

using namespace std;

int main(){
    int hi,mi,hf,mf;
    cin>>hi>>mi>>hf>>mf;
    int x=0,y=0;
    int contx=0,conty=0;
    if(hi==hf ){
        if(mi==mf){
        x=24;
        y=0;
        }else{
            if(mi<mf){
                x=0;
                y=mf-mi;
            }else{
                x=23;
                y=60-mi+mf;
            }
        }
    }else{
        if(hf>hi){
            x=hf-hi;
            if(mi==mf){
                y=0;
            }else{
                if(mf>mi){
                    y=mf-mi;
                }else{
                    x--;
                    y=60-mi+mf;
                }
            }
        }else{
            x=24-hi+hf;
            if(mi==mf){
                y=0;
            }else{
                if(mf>mi){
                    y=mf-mi;
                }else{
                    x--;
                    y=60-mi+mf;
                }
            }
        }
    }
                
                
    cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<y<<" MINUTO(S)"<<endl;

    return 0;
}
