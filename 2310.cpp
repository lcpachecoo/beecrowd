#include <iomanip>
#include <iostream>

using namespace std;

int main()
{ 
	int x, vet[6];
	float somaST=0,somaSA=0,somaBT=0,somaBA=0,somaAT=0,somaAA=0;
	char nome[30];
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>nome;
		for(int j=0; j<6;j++){
			cin>>vet[j];
		}
		somaST+=vet[0];
		somaSA+=vet[3];
		somaBT+=vet[1];
		somaBA+=vet[4];
		somaAT+=vet[2];
		somaAA+=vet[5];
	}
	cout<< fixed<<setprecision(2);
	cout<<"Pontos de Saque: "<<(somaSA*100)/somaST<<" %."<<endl;
	cout<<"Pontos de Bloqueio: "<<(somaBA*100)/somaBT<<" %."<<endl;
	cout<<"Pontos de Ataque: "<<(somaAA*100)/somaAT<<" %."<<endl;
			
    return 0;
}
