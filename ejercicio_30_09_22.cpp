#include <iostream>

using namespace std;

class Nodo{
public:
    int dato;
    int exponente; 
    Nodo *sig;
    Nodo(){
        sig=NULL;
    }
};

class ListaEnl{
    Nodo *head;
public:
    ListaEnl (){
        head=NULL;
    }

    void insert(int dato,int exponente){
        Nodo *temp = new Nodo();
        temp->dato=dato;
        temp->exponente=exponente;

        temp->sig=head;
        head = temp;
           
    }

    void imprimir() {
        Nodo *nodoactual = this->head;
        if (nodoactual != nullptr) {
            for(nodoactual=head;nodoactual != nullptr;nodoactual=nodoactual->sig){
                cout<<"("<<nodoactual->dato<<" , "<<nodoactual->exponente<<")->";
            }
        } else {
            cout << "La lista está vacía." << endl;
        }
    }

    void add(int dato,int exponente){

        Nodo *temp= new Nodo();
        temp->dato = dato;
        temp->exponente=exponente;

        Nodo *nodoactual = this->head;

        while(exponente>nodoactual->exponente){
            nodoactual->sig;
        }
        
        Nodo *ptr =head;
        temp->sig = ptr->sig;
        ptr->sig = temp;

    }
};

void menu(){
        cout<<"Menu de lista enlazada"<<endl;
        cout<<" 1. insert"<<endl;
        cout<<" 2. Mostrar Lista"<<endl;
        cout<<" 3. add"<<endl;
        cout<<" 4. SALIR"<<endl;
        cout<<"Digite N OPCION: ";
    }

int main(){

    int opcion;

    Nodo* a = new Nodo;

    ListaEnl lista = ListaEnl ();
    do
        {
            menu();  
            cin>> opcion;
    
            switch(opcion)
            {
                case 1:
                    int dato;
                    int expon;
                    cout<< "Ingresar dato: "; cin>>dato;
                    cout<< "Ingresar exponente: ";cin>>expon;
                    lista.insert(dato,expon);
                break;
    
                case 2:
                    cout << "\nLista: \n";
                    lista.imprimir();
                break; 

                case 3:
                    int dato2;
                    int expon2;
                    cout<< "Ingresar dato: "; cin>>dato2;
                    cout<< "Ingresar exponente: "; cin>>expon2;
                    lista.add(dato2,expon2);
                break; 
            }
            cout<<endl;

        }while(opcion!=4);
}
