#include <iostream>
#include "enrutador.h"

using namespace std;

int main()
{
    Enrutador nodoA("Nodo A");
    Enrutador nodoB("Nodo B");
    Enrutador nodoC("Nodo C");
    Enrutador nodoD("Nodo D");

    nodoA.agregarNodo(&nodoB,4);
    nodoA.agregarNodo(&nodoC,10);
    nodoA.imprimirNodos();

    nodoB.agregarNodo(&nodoA,4);
    nodoB.agregarNodo(&nodoD,1);
    nodoB.imprimirNodos();

    nodoC.agregarNodo(&nodoA,10);
    nodoC.agregarNodo(&nodoD,2);
    nodoC.imprimirNodos();

    nodoD.agregarNodo(&nodoB,1);
    nodoD.agregarNodo(&nodoC,2);
    nodoD.imprimirNodos();

    nodoA.crearTabla();

    nodoA.imprimirNodosAccesibles();
    return 0;
}
