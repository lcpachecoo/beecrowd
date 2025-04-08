#include <iomanip>
#include <iostream>

using namespace std;

int main()
{ 
	char vet[26];
	int x,y;
	 
	while(cin>>vet){
		cin>>x;
		for(int i=0;i<x;i++){
			cin>>y;
			cout<<vet[y-1];
		}
		cout<<endl;
	}
	
    return 0;
}
