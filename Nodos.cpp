#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int valor;
	Nodo *puntero;
	Nodo(int nuevoValor=0){
		valor=nuevoValor;
		puntero=NULL;
	}
	
	void insertar(int nuevoValor=0){
		Nodo *actual=puntero;
		Nodo *nuevoNodo=new Nodo(nuevoValor);
		if(actual!=NULL) while(actual->puntero!=NULL) actual=actual->puntero;
		if(actual==NULL) puntero=nuevoNodo;
		else actual->puntero=nuevoNodo;
	}
	
	void mostrar(){
		cout<<valor<<endl;
		Nodo *actual=puntero;
		while(actual!=NULL){
			cout<<actual->valor<<endl;
			actual=actual->puntero;
		}
	}
	
};

	void menu(){
    cout<<"\nMenú de opciones \n"<<endl;
    cout<<"1 Agregar nodo \n"<<"2 Mostar Valores \n"<<"3 Salir \n"<<endl;
    cout<<"Elige una opción del menú: \n"<<endl;
	}

int main(){
	char *locale;
    locale=setlocale(LC_ALL,"");
	Nodo l1(3);
	int opcion;
	int repetir=true;
	while(repetir){
		menu();
		cin>>opcion;
		if(opcion==1){
            system("CLS");
		    l1.insertar(4);
		    l1.insertar(5);
		    l1.insertar(6);
		    l1.insertar(7);
		    system ("CLS");
        }else if(opcion==2){
		    l1.mostrar();
		    system("CLS");
		}else cout<<"Opción inválida \n";
        cout<<"\n¿Regresar al menú? (1 Si / 2 No)\n";
        cin>>repetir;
	}
	return 0;
	getch();
}
