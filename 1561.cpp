#include <iostream>

using namespace std;
void tela(int x){
    if(x==1){
         cout<<" ____________________________________________\n";
         cout<<"|                                            |\n";
         cout<<"|    ____________________________________    |_\n";
         cout<<"|   |                                    |   |_)\n";
         cout<<"|   |   8         4         2         1  |   |\n";
         cout<<"|   |                                    |   |\n";
    }else{
        if(x==2){
            cout<<"|   |                                    |   |\n";
            cout<<"|   |   32    16    8     4     2     1  |   |_\n";
            cout<<"|   |____________________________________|   |_)\n";
            cout<<"|                                            |\n";
            cout<<"|____________________________________________|\n";
        }else{
            cout<<"|   |                                    |   |\n";
            cout<<"|   |                                    |   |\n";

        }
    }
}
int main()
{
    int cont=0;
    int h,min;
    char linha[49]="|   |                                    |   |";

    //superior coemca 8 e +=10 ate 38
    //inferior comeca 8 e +=6  ate 38
    while(cin>>h){
        getchar();
        cin>>min;
        if(cont>0){
            cout<<endl;
        }
        cont++;
        
        tela(1);
        
        if(h/8==1){
            linha[8]='o';
            h-=8;
        }
        if(h/4==1){
            linha[18]='o';
            h-=4;
        }
        if(h/2==1){
            linha[28]='o';
            h-=2;
        }
        if(h/1){
            linha[38]='o';
            h-=1;
        }
        for(int i=0;i<46;i++){
            cout<<linha[i];
        }
        cout<<endl;
        linha[8]=' ';
        linha[18]=' ';
        linha[28]=' ';
        linha[38]=' ';
        
        
        tela(10);
        
        
        
        if(min/32==1){
            linha[8]='o';
            min-=32;
        }
        if(min/16==1){
            linha[14]='o';
            min-=16;
        }
        if(min/8==1){
            linha[20]='o';
            min-=8;
        }
        if(min/4==1){
            linha[26]='o';
            min-=4;
        }
        if(min/2==1){
            linha[32]='o';
            min-=2;
        }
        if(min/1){
            linha[38]='o';
            min-=1;
        }
        for(int i=0;i<46;i++){
            cout<<linha[i];
        }
        cout<<endl;
        linha[8]=' ';
        linha[14]=' ';
        linha[20]=' ';
        linha[26]=' ';
        linha[32]=' ';
        linha[38]=' ';
        
        
        
        tela(2);
        
    }
     cout<<endl;
    return 0;
}