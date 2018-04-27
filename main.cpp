#include <iostream>
#include "enrutador.h"
#include "par.h"
#include <map>
#include <vector>

using namespace std;


int main()
{

    map<string, Par> nodosCercanos;
    Enrutador nodoA("Nodo A");
    Enrutador nodoB("Nodo B");
    Enrutador nodoC("Nodo C");
    Enrutador nodoD("Nodo D");


    nodosCercanos[nodoA.nombreNodo] = Par(nodoA,5);
    nodosCercanos[nodoB.nombreNodo] = Par(nodoB,6);
    nodosCercanos[nodoC.nombreNodo] = Par(nodoC,7);

    map<string, Par>::iterator it = nodosCercanos.begin();

    for(;it!=nodosCercanos.end();it++){
        cout << it->first << "=>" << it->second.getNodo().nombreNodo <<","<< it->second.getCosto() << endl;
    }
//    Enrutador nodoA("Nodo A");


//    nodoA.agregarNodo(&nodoB,4);
//    nodoA.agregarNodo(&nodoC,10);
//    nodoA.imprimirNodos();

//    nodoB.agregarNodo(&nodoA,4);
//    nodoB.agregarNodo(&nodoD,1);
//    nodoB.imprimirNodos();

//    nodoC.agregarNodo(&nodoA,10);
//    nodoC.agregarNodo(&nodoD,2);
//    nodoC.imprimirNodos();

//    nodoD.agregarNodo(&nodoB,1);
//    nodoD.agregarNodo(&nodoC,2);
//    nodoD.imprimirNodos();

//    nodoA.crearTabla();

//    nodoA.imprimirNodosAccesibles();
//    return 0;
}
