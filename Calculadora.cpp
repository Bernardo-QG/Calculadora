#include <iostream>
#include <cmath>

using namespace std;

int coseno();
coseno(){
	int n;
	double c;
	cout<<"Ingresa el nuemro."<<endl;
	cin>>n;
	c=cos(n);
	cout<<c<<endl;
	return (0);
}

int arcocoseno();
arcocoseno(){
	int n;
	double c;
	cout<<"Ingresa el nuemro."<<endl;
	cin>>n;
	c=acos(n);
	cout<<c<<endl;
	return (0);
}
int main(){
	int op=1,n,o;
	
	while(op!=0){
		system ("CLS");
		cout<<"Que funcion desea realizar."<<endl
			<<"1-.Seno."<<endl
			<<"2-.Coseno."<<endl
			<<"3-.Tangente."<<endl
			<<"4-.Arco Seno."<<endl
			<<"5-.Arco Coseno."<<endl
			<<"6-.Arco Tangente."<<endl;
		cin>>o;
		
		switch(o){
			case 1:
				
				break;
			case 2:
				coseno();
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				arcocoseno();
				break;
			case 6:
				
				break;
		}
		cout<<"Realizar otra operacion."<<endl
			<<"1-. Si"<<endl
			<<"0-. No"<<endl;
		cin>>op;
	} 
	return 0;
}
