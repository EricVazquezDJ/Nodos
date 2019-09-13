#include <iostream>

using namespace std;

struct Nodo{
	int valor;
	Nodo *puntero;
};

int main(){
	char *locale;
    locale=setlocale(LC_ALL,"");
    
    Nodo *inicio;
    Nodo *aux;
    
    inicio=NULL;
    aux=new Nodo();
    
    //aux->valor=3;
    //aux->puntero=NULL;
    
	//cout<<aux->valor<<endl;
	
	//delete aux;

	
	aux=new Nodo();
	aux->valor=7;
	aux->puntero=NULL;
	cout<<aux->valor<<endl;
	inicio=aux;
	
	
	aux=new Nodo();
	aux->valor=8;
	aux->puntero=NULL;
	cout<<aux->valor<<endl;
	inicio->puntero=aux;
	
	
	aux=new Nodo();
	aux->valor=9;
	aux->puntero=NULL;
	cout<<aux->valor<<endl;
	inicio->puntero->puntero=aux;
	
	
	aux=new Nodo();
	aux->valor=5;
	aux->puntero=NULL;
	cout<<aux->valor<<endl;
	inicio->puntero->puntero->puntero=aux;
	
	
	aux=new Nodo();
	aux->valor=6;
	aux->puntero=NULL;
	cout<<aux->valor<<endl;
	inicio->puntero->puntero->puntero->puntero=aux;
	
	cout<<endl;
	cout<<"Vista Dinamica:"<<endl;
	cout<<inicio->valor<<endl;
	cout<<(inicio->puntero)->valor<<endl;
	cout<<(inicio->puntero)->puntero->valor<<endl;
	cout<<(inicio->puntero)->puntero->puntero->valor<<endl;
	cout<<(inicio->puntero)->puntero->puntero->puntero->valor<<endl;

	

	system("pause");
	return 0;

}
