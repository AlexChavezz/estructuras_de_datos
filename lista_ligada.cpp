#include <iostream>
using namespace std;

// class cLista
// {
// private:
//     class Nodo
//     {
//         public:
//             int dato;
//             Nodo *siguiente;
//     };
//     Nodo* list;
// };

class cLista 
{
    public:
    int n;
    cLista* siguiente;
    cLista()
    {
        n=0;
        siguiente=NULL;
    }
    void crearLista();
    void mostrarLista(cLista* lista);
};

void cLista::crearLista()
{
    int size;
    cout<<"Cuantos noodos requieres en la lista"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cLista* nuevo=new cLista();
        cout<<"Ingresa el dato del nodo "<<i+1<<endl;
        cin>>nuevo->n;
        if(siguiente==NULL)
        {
            siguiente=nuevo;
        }
        else
        {
            cLista* aux=siguiente;
            while(aux->siguiente!=NULL)
            {
                aux=aux->siguiente;
            }
            aux->siguiente=nuevo;
        }

    }
    // cLista* lista = new cLista();
    // lista->n = numero;
    // cout<< numero<<" asingnado"<<endl;
    for(int i=0; i<size; i++)
    {
        cLista
        // lista->siguiente = new cLista();
        // lista = lista->siguiente;
        // lista->n = i;
        // cout<< i<<" asingnado"<<endl;
    }
    // cLista* lista = new cLista;
    // cLista* aux = lista;
    // int n;
    // cout << "Ingrese un numero: ";
    // cin >> n;
    // while(n != 0)
    // {
    //     aux->n = n;
    //     aux->siguiente = new cLista;
    //     aux = aux->siguiente;
    //     cout << "Ingrese un numero: ";
    //     cin >> n;
    // }
    // mostrarLista(lista);
}

int main()
{
    cLista *obj = new cLista(); 
    obj->crearLista(20);
    return 0;
}