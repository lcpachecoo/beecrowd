#include <iostream>

using namespace std;

int main()
{ 
	int n,cont=0,maiorcont=0,maior=0;
	cin>>n;
	int vet[n];
	for(int i=0; i<n;i++){
	    cin>>vet[i];
	}
	for(int i=0;i<n;i++){
	    cont=0;
	    for(int j=0;j<n;j++){
	        if(vet[i]==vet[j]){
	            cont++;
	        }
	    }
	    if(maiorcont<=cont ){
	        if(maior<vet[i] ||cont>maiorcont){
	            //cout<<"|"<<cont<<"|";
	            maiorcont=cont;
	            maior=vet[i];
	        }
	        
	    }
	    
	}
	cout<<maior<<endl;
    return 0;
}
