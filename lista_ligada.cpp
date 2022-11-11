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
    void crearLista(int n);
    void mostrarLista(cLista* lista);
};

void cLista::crearLista(int numero)
{
    cLista* lista = new cLista();
    lista->n = numero;
    cout<< numero<<" asingnado"<<endl;
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