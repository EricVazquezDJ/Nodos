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
	
	void insertar(int nuevoValor){
		Nodo *actual=puntero;
		Nodo *nuevoNodo=new Nodo(nuevoValor);
		if(actual!=NULL) while(actual->puntero!=NULL) actual=actual->puntero;
		if(actual==NULL) puntero=nuevoNodo;
		else actual->puntero=nuevoNodo;
	}
	
	void mostrar(){
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
Nodo l1;
int main(){
	char *locale;
    locale=setlocale(LC_ALL,"");
	int opcion;
	int repetir=true;
	while(repetir){
		system("CLS");
		menu();
		cin>>opcion;
		if(opcion==1){
            system("CLS");
			int nuevoDato;
			cout<<"Dato a ingresar: ";
			cin>>nuevoDato;
			l1.insertar(nuevoDato);
        }else if(opcion==2){
        	system("CLS");
        	cout<<"Los valores son: "<<endl;
        	l1.mostrar();
		}else {
			break;
		}
        cout<<"\n¿Regresar al menú? (1 Si / 2 No)\n";
        cin>>repetir;
	}
	return 0;
	getch();
}
