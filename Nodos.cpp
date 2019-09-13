#include <iostream>

using namespace std;

struct Nodo{
	int valor;
	Nodo *puntero;
};

int main(){
	char *locale;
    locale=setlocale(LC_ALL,"");
    
	Nodo n1;
	n1.valor=3;
	n1.puntero=NULL;
	Nodo n2;
	n2.valor=7;
	n2.puntero=NULL;
	Nodo n3;
	n3.valor=9;
	n3.puntero=NULL;
	Nodo n4;
	n4.valor=5;
	n4.puntero=NULL;
	Nodo n5;
	n5.valor=2;
	n5.puntero=NULL;
	
	n1.puntero=&n2;
	n2.puntero=&n3;
	n3.puntero=&n4;
	n4.puntero=&n5;

	cout<<n1.valor<<endl;
	cout<<n1.puntero->valor<<endl;
	cout<<n1.puntero->puntero->valor<<endl;
	cout<<n1.puntero->puntero->puntero->valor<<endl;
	cout<<n1.puntero->puntero->puntero->puntero->valor<<endl;
		
	system("pause");
	return 0;

}
