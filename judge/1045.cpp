#include <iostream>

using namespace std;

int main()
{
    double A,B,C, maior;
    cin>>A>>B>>C;
    if(B>A){
        maior = A;
        A=B;
        B=maior;
    }
    if(C>A){
        maior = A;
        A=C;
        C=maior;
    }
    if(A>=B+C){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else{
        if((A*A)==(B*B)+(C*C)){
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if((A*A)>(B*B)+(C*C)){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if((A*A)< (B*B)+ (C*C)){
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(A==B && A==C){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if(A==B && A!=C || B==C && B!=A || C==A && C!=B){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }
    
    return 0;
}