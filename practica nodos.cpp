#include <iostream>
#include <string.h>

using namespace std;

struct CuentaBancaria {
    int numeroCuenta;
    string nombreCliente;
    double saldo;
};

//Nodo para almacenar datos
struct Nodo {
    //dato
    CuentaBancaria cuenta;
    //enlace
    Nodo* siguiente;

};

class ListaEnlazadaSimple {

private:
    Nodo* inicio;

public:
    ListaEnlazadaSimple() {
        inicio = nullptr;
    }

    void agregar(Nodo* nuevoNodo) {
        if (inicio == nullptr) {
            inicio = nuevoNodo;
        }
        else {
            //Tomamos la referencia del primer elemento de la lista 
            Nodo* nodoAuxiliar = inicio;

            //Avanzamos hasta encontrar el ultimo de la lista
            while (nodoAuxiliar->siguiente != nullptr)
            {
                //Avanzamos elsiguiente Nodo
                nodoAuxiliar = nodoAuxiliar->siguiente;
            }
        }

    }
};

int main(int argc, char const *argv[])
{
    return 0;
    
}