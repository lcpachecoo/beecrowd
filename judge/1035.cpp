#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	  
	int  A,B,C,D;
	cin>>A>>B>>C>>D;
    if(B>C && D>A && (C+D)>(A+B) && (A%2)==0)
    {
    	cout<<"Valores aceitos"<<endl;

    }else{
        cout<<"Valores nao aceitos"<<endl;
    }
	
	
}