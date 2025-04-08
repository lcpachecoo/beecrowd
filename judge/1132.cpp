#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,x,y;
    int soma=0;
    cin>>x>>y;
    
    if(x<y){
        for(int i=x;i<=y;i++){
            if(i%13!=0){
                soma+=i;
            }
        }
    }else{
        for(int i=y ;i<=x;i++){
            if(i%13!=0){
                soma+=i;
            }
        }
    }
    cout<<soma<<endl;
    

    return 0;
}