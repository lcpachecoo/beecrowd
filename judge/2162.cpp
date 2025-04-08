#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int n,x,cont=0;
    cin>>n;
    int h[n];
    
    for(int i=0; i<n;i++){
        cin>>x;
        h[i]=x;
    }
    for(int i=1;i<n;i=i+2){
		if(h[0]>=h[1]){
			if(h[i]<h[i-1] && h[i]<h[i+1]){
				cont+=2;
			}else{
				if(i+2>n && n%2==0){
					if(h[n-1]<h[n-2]){
						cont+=2;
					}
				}
			}
		}else{
			if(h[0]<=h[1]){
				if(h[i]>h[i-1] && h[i]>h[i+1]){
					cont+=2;
				}else{
					if(i+2>n && n%2==0){
						if(h[n-1]>h[n-2]){
							cont+=2;
						}
					}
				}
			}
					
		}
	}
	if(n%2!=0){
		cont++;
	}
    if(cont==n){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}
