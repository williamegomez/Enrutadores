#include "par.h"

Par::Par()
{

}

Par::Par(Enrutador node, int cost) {
    this->nodo = node;
    this->costo = cost;
}

int Par::getCosto() const
{
    return costo;
}

void Par::setCosto(int value)
{
    costo = value;
}

Enrutador Par::getNodo() const
{
    return nodo;
}

void Par::setNodo(const Enrutador &value)
{
    nodo = value;
}
